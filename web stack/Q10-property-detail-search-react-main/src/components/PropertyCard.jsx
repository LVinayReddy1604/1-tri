import React from 'react';
import Button from 'react-bootstrap/Button';
import Card from 'react-bootstrap/Card';

export default function PropertyCard({ name, type, location,price,bedrooms,bathrooms }) {
  return (
    <Card style={{ width: '18rem' }} className="col-md-8 mx-2 my-2">
      <Card.Img variant="top" src="" />
      <Card.Body>
        <Card.Title>Name:{name}</Card.Title>
        <Card.Text>Type:{type}</Card.Text>
        <Card.Text>Price:{price}</Card.Text>
        <Card.Text>Bedrooms:{bedrooms}</Card.Text>
        <Card.Text>Bathrooms:{bathrooms}</Card.Text>
        <Card.Text>Location:{location}</Card.Text>
      </Card.Body>
    </Card>
  );
}
