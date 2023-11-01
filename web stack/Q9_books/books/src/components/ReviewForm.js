// ReviewForm.js
import React, { useState } from 'react';

function ReviewForm({ bookId, onSubmitReview }) {
  const [reviewText, setReviewText] = useState('');

  const handleSubmit = () => {
    if (reviewText.trim() !== '') {
      onSubmitReview(bookId, reviewText);
      setReviewText(''); // Clear the input field after submission
    }
  };

  return (
    <div className="ReviewForm">
      
      <textarea
        rows="4"
        cols="50"
        placeholder="Write your review here"
        value={reviewText}
        onChange={(e) => setReviewText(e.target.value)}
      />
      <button onClick={handleSubmit}>Submit Review</button>
    </div>
  );
}

export default ReviewForm;