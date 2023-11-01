import React, { useState } from 'react';

export default function AddTask({ onAddTask }) {
  const [addText, setAddText] = useState('');
  const [check, setCheck] = useState(false);
  function submitHandler(e) {
    e.preventDefault();
    //call add task method
    if (!e.target.text.value) {
      setCheck(true);
      return;
    }
    setAddText('');
    onAddTask(addText);
  }

  return (
    <div className="w-50 mt-4">
      {check && (
        <div className="mt-2 alert alert-danger" role="alert">
          Please enter task details
        </div>
      )}
      <form className="form-inline" onSubmit={submitHandler}>
        <div className="input-group">
          <input
            className="form-control mr-sm-2 mr-2"
            type="text"
            name="text"
            value={addText}
            onChange={(e) => setAddText(e.target.value)}
          />

          <button type="submit" className="btn btn-dark mx-2 my-sm-0">
            Add
          </button>
        </div>
      </form>
    </div>
  );
}
