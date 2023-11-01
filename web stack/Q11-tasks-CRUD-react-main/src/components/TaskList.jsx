import React, { useState } from 'react';

export default function TaskList({ tasks, onChangeTask, onDeleteTask }) {
  return (
    <ul className="list-group w-50 ">
      {tasks.map((task) => (
        <li className="list-group-item my-2" key={task.id}>
          <Task task={task} onChange={onChangeTask} onDelete={onDeleteTask} />
        </li>
      ))}
    </ul>
  );
}

function Task({ task, onChange, onDelete }) {
  const [isEditing, setIsEditing] = useState(false);
  let taskContent;
  if (isEditing) {
    taskContent = (
      <>
        <input
          value={task.text}
          className="form-control"
          onChange={(e) => {
            onChange({
              ...task,
              text: e.target.value,
            });
          }}
        />
        <button
          className="btn btn-dark ml-2"
          onClick={() => setIsEditing(false)}
        >
          Save
        </button>
      </>
    );
  } else {
    taskContent = (
      <>
        <span style={{marginRight:"100px"}}>{task.text}</span>
        <button
          className="btn btn-secondary ml-2"
          onClick={() => setIsEditing(true)}
          style={{marginLeft:"10px"}}
        >
          Edit
        </button>
      </>
    );
  }
  return (
    <label>
      <input
        type="checkbox"
        checked={task.done}
        onChange={(e) => {
          onChange({
            ...task,
            done: e.target.checked,
          });
        }}
      />
      {taskContent}
      <button className="btn btn-dark ml-2" style={{marginLeft:"10px"}} onClick={() => onDelete(task.id)}>
        Delete
      </button>
    </label>
  );
}
