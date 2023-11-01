import MyForm from './components/MyForm';
import PropertyList from './components/PropertyList';

function App() {
  return (
    <div className="d-flex flex-column justify-content-center">
      <div>
        <h3 className="text-center mt-2">Property Search</h3>
      </div>
      <MyForm />
      <PropertyList />
    </div>
  );
}

export default App;
