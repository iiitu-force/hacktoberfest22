import { theme } from './src/core/theme'
import {
    StartScreen,
    LoginScreen,
    RegisterScreen,
    ResetPasswordScreen,
    Dashboard,
} from './src/screens'
import { Provider } from 'react-native-paper'
import { NavigationContainer } from '@react-navigation/native'
import { createStackNavigator } from '@react-navigation/stack'
import { useContext, useEffect } from 'react'
import GlobalContext from './src/context/GlobalContext'

const Stack = createStackNavigator()


const Wrapper = () => {
    const { axiosInstance, setMachineId, setGeoLocation, machineId, geoLocation, setMachineConfigs } = useContext(GlobalContext)
    useEffect(() => {
        setMachineConfigs();
    }, [])

    return (

        <Provider theme={theme}>
            <NavigationContainer>
                <Stack.Navigator
                    initialRouteName="StartScreen"
                    screenOptions={{
                        headerShown: false,
                    }}
                >
                    <Stack.Screen name="StartScreen" component={StartScreen} />
                    <Stack.Screen name="LoginScreen" component={LoginScreen} />
                    <Stack.Screen name="RegisterScreen" component={RegisterScreen} />
                    <Stack.Screen name="Dashboard" component={Dashboard} />
                    <Stack.Screen
                        name="ResetPasswordScreen"
                        component={ResetPasswordScreen}
                    />
                </Stack.Navigator>
            </NavigationContainer>
        </Provider>
    )
}

export default Wrapper;