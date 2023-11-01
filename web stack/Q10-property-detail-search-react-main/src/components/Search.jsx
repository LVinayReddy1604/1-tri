import React, { useState, useEffect } from 'react';
import { useParams } from 'react-router-dom';
import PropertyCard from './PropertyCard';
import { Alert } from 'react-bootstrap';

export default function Search() {
  const url =
    'https://raw.githubusercontent.com/Punithify/punithify.github.io/main/properties.json';

  const [data, setData] = useState([]);
  const [searchItems, setSearchItems] = useState([]);
  const [ready, isReady] = useState(null);

  const { slug } = useParams();

  const searchValue = () => {
    console.log(data);
    const filteredItems = data.filter(
      (property) =>
        property.name.toLowerCase().includes(slug.toLowerCase()) ||
        property.type.toLowerCase().includes(slug.toLowerCase()) ||
        property.location.toLowerCase().includes(slug.toLowerCase())
    );
    // console.log(filteredItems);
    setSearchItems(filteredItems);
  };

  useEffect(() => {
    async function makeRequest() {
      const res = await fetch(url);
      const data = await res.json();
      // console.log('data', data);
      setData(data);
      isReady(true);
    }
    makeRequest();
  }, []);

  useEffect(() => {
    if (ready === null) {
      return;
    }
    searchValue();
  }, [ready]);

  return (
    <div className="mt-2">
      <h4 className="text-center">Search Results</h4>
      {searchItems.length === 0 ? (
        <Alert variant="light">No Search Results</Alert>
      ) : (
        <>
          <div className="container">
            <div className="row">
              {searchItems.map((property) => (
                <PropertyCard
                  key={property.id}
                  name={property.name}
                  type={property.type}
                  location={property.location}
                  price={property.price}
                  bedrooms={property.bedrooms}
                  bathrooms={property.bathrooms}
                />
              ))}
            </div>
          </div>
        </>
      )}
    </div>
  );
}
