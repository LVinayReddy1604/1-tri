// BookList.js
import React from 'react';
import ReviewForm from './ReviewForm'; // Import the ReviewForm component

function BookList({ books, reviews, onSubmitReview }) {
  return (
    <div className="BookList">
      <h2>Books</h2>
      <ul>
        {books.map((book) => (
          <li key={book.id}>
            <h3>{book.title}</h3>
            <p>Author: {book.author}</p>
            <p>Description: {book.description}</p>
            <h4>Reviews:</h4>
            <ul>
              {reviews[book.id]?.map((review, index) => (
                <li key={index}>{review.text}</li>
              ))}
            </ul>
           
            {/* Render the ReviewForm component with the bookId prop */}
            <ReviewForm bookId={book.id} onSubmitReview={(bookId, reviewText) => onSubmitReview(bookId, reviewText)} />
          </li>
        ))}
      </ul>
    </div>
  );
}

export default BookList;