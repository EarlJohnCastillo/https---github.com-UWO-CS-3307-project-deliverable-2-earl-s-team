import { SetStateAction, useState } from "react";

function UserFocus({ callback }) {
  const [selection, setData] = useState(0);

  const updateInfo = (value: SetStateAction<number>) => {
    setData(value);
    callback(value);
  };

  return (
    <>
      <h4>Dvidend or Captial Gain Focused?</h4>
      <input
        type="range"
        name="UserInvestmentFocus"
        min="0"
        max="100"
        step="1"
        value={selection}
        onChange={(e) => updateInfo(Number(e.target.value))}
        id="Slider"
      />
      <h1>{selection}%</h1>
    </>
  );
}
export default UserFocus;
