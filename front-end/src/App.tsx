import Title from "./components/Title";
import RiskRadioButtons from "./components/RiskRadioButtons";
import UserFocus from "./components/UserFocus";
import Funds from "./components/Funds";
import InvestmentYears from "./components/InvestmentYears";
import { useState } from "react";

function App() {
  const [userRisk, setUserRisk] = useState(0);
  const [userFocus, setUserFocus] = useState(0);
  const [userFunds, setUserFunds] = useState(1);
  const [userInvesmentPeriod, setUserInvesmentPeriod] = useState(1);

  //Use this to iniate comms with back end C++
  const handleSubmit = (e) => {
    console.log(userRisk);
    console.log(userFocus);
    console.log(userFunds);
    console.log(userInvesmentPeriod);
  };

  return (
    <form>
      <Title />
      <RiskRadioButtons callback={setUserRisk} />
      <h1></h1>
      <UserFocus callback={setUserFocus} />
      <Funds callback={setUserFunds} />
      <InvestmentYears callback={setUserInvesmentPeriod} />

      <input type="button" onClick={(e) => handleSubmit(e)} />
    </form>
  );
}

export default App;
