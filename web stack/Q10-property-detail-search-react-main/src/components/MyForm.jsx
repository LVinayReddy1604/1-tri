import React, { useState } from 'react';
import { useSearchParams, useNavigate } from 'react-router-dom';
import { Form, Row, Button, Alert } from 'react-bootstrap';

export default function MyForm() {
  let [searchParams, setSearchParams] = useSearchParams();
  const [check, setCheck] = useState(false);
  const navigate = useNavigate();

  function handleSubmit(event) {
    event.preventDefault();
    const searchVal = event.target.search.value;
    console.log(searchVal);
    if (!searchVal) {
      console.log('no search value');
      setCheck(true);
      navigate('/');
      return;
    }
    navigate(`/search/${searchParams.get('q')}`);
    console.log(searchVal);
    console.log(searchParams);
  }
  return (
    <div className="w-50" style={{ margin: '20px' }}>
      {check && <Alert variant="warning">Please enter a search field before submitting</Alert>}
      <Form onSubmit={handleSubmit}>
        <Row className="d-flex flex-column align-items-end">
          <Form.Group>
            <Form.Control style={{ margin: '18px' }}
              type="text"
              name="search"
              placeholder="enter search field"
              defaultValue={!searchParams.get('q') ? '' : searchParams.get('q')}
              onChange={(e) => setSearchParams({ q: e.target.value })}
            />
          </Form.Group>
          <Form.Group>
            <Button style={{ margin: '18px' }} type="submit" variant="secondary" >
              search
            </Button>
          </Form.Group>
        </Row>
      </Form>
    </div>
  );
}
