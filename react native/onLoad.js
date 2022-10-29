import { getData, storeData } from "./src/asyncStorage/storageFunctions"
import uuid from 'react-native-uuid';
import axios from "axios";
const onLoad = async (setMachineId,setGeoLocation)=>{
    let machineId = await getData("machineId");
    if(machineId===null){
        machineId=uuid.v4();
        storeData("machineId",machineId);
    }
    console.log(machineId);
    setMachineId(()=>
        machineId
    );

   try {
    let res= await axios.get("https://ipapi.co/json/");
    setGeoLocation(()=>
        JSON.stringify(res.data)
    )
   } catch (error) {
    console.log(error);
   }

}

export default onLoad;

