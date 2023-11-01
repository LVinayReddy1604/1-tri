import { useState } from 'react';
import AddTask from './components/AddTask';
import TaskList from './components/TaskList';
import { useReducer } from 'react';
import tasksReducer from './reducers/taskReducers';

function App() {
  const [tasks, dispatch] = useReducer(tasksReducer, initialTasks);
  function handleAddTask(text) {
    dispatch({
      type: 'added',
      id: nextId++,
      text: text,
    });
  }

  function handleChangeTask(task) {
    dispatch({
      type: 'changed',
      task: task,
    });
  }

  function handleDeleteTask(taskId) {
    dispatch({
      type: 'deleted',
      id: taskId,
    });
  }

  return (
    <div className="d-flex flex-column justify-content-center mx-2 my-2" style={{paddingLeft:"400px", paddingTop:"50px"}}>
      <div>
        <h1>CRUD Operations</h1>
        <AddTask onAddTask={handleAddTask} />
      </div>
      <div>
        <TaskList
          tasks={tasks}
          onChangeTask={handleChangeTask}
          onDeleteTask={handleDeleteTask}
        />
      </div>
    </div>
  );
}

let nextId = 3;
const initialTasks = [
  { id: 0, text: 'task-1', done: true },
  { id: 1, text: 'task-2', done: false },
  { id: 2, text: 'task-3', done: false },
];

export default App;
