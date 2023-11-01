import React from 'react';
import Alert from 'react-bootstrap/Alert';
import Button from 'react-bootstrap/Button';

export default function Review({ name, bookName, comment, author, language, image }) {
  console.log(author);
  return (
    <Alert variant="primary">
      <Alert.Heading className="text-danger">{bookName}</Alert.Heading>
      <p classname=" ">{name}</p>
      <p className="text-dark">{comment}</p>
    </Alert>
  );
}
