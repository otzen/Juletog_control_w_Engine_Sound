// ******* RECOMMENDED Audacity Settings: 22'050 Hz, 8 bit PCM **********

// Sound files converted with: https://bitluni.net/wp-content/uploads/2018/01/Audio2Header.html
// converter code by bitluni (send him a high five if you like the code)

// Sound files (22'050 Hz, 8 bit PCM recommended) -----------------------------------------------------------------------
// Choose the start sound (uncomment the one you want)
#include "UnionPacific2002Start.h" // Union Pacific 2002 SD70M Locomotive Start
//#include "ScaniaV8Start.h" // Scania V8 Start
//#include "UralV8Start.h" // Ural 4320 V8 Start
//#include "DefenderV8Start.h" // Land Rover Defender V8 Start <------- Check this one out!
//#include "JaguarXjsHeStart.h" // Jaguar XJS HE Start

// Choose the motor sound (uncomment the one you want)
volatile int idleVolumePercentage = 60; // Adjust the idle volume (usually = 100%, never more!),
#include "UnionPacific2002Idle.h" // Union Pacific 2002 SD70M Locomotive with 16 cylinder Diesel (set volume to 60%)
//#include "ScaniaV8Idle.h" // Scania V8
//#include "UralV8Idle.h" // Ural 4320 V8
//#include "DefenderV8Idle.h" // Land Rover Defender V8 <------- Check this one out!
//#include "Mustang68Idle.h" // Ford Mustang 1968
//#include "DodgeChallenger70Idle.h" // 1970 Dodge Challenger
//#include "MgBGtV8Idle.h" // MG B GT V8
//#include "LaFerrariIdle.h" // Ferrari "LaFerrari"
//#include "chevyNovaV8Idle.h" // Chevy Nova Coupe 1975 <------- The best sounding!
//#include "V8TrophyTruckIdle.h" // V8 Trophy Truck
//#include "JaguarXjsHeIdle.h" // Jaguar XJS HE (bad quality)

// Choose the horn sound (uncomment the one you want)
#include "TrainHorn.h" // American train horn
//#include "UsPoliceSiren.h" // US Police siren
//#include "FeuerwehrMartinshorn.h" // European Feuerwehr Martinshorn
//#include "ManTgeHorn.h" // MAN TGE truck horn <------- Bombastic!
//#include "PostAutoHorn.h" // The typical Swiss post bus horn
//#include "CarHorn.h" // A boring car horn

// PWM Throttle range calibration ---------------------------------------------------------------------------------------
int16_t pulseZero = 1500; // Usually 1500 (range 1000 - 2000us) Autocalibration active, if "engineManualOnOff" = "false"
int16_t pulseNeutral = 20; // pulseZero +/- this value (20)
int16_t pulseSpan = 450; // pulseZero +/- this value (150 for JMT 10A ESC, otherwise around 450)
int16_t pulseLimit = 700; // pulseZero +/- this value (700)

// Horn trigger signal type (true / false)-------------------------------------------------------------------------------
const boolean pwmHornTrigger = true; // horn triggered by RC PWM signal instead of constant high level signal, if "true"
// Do NOT enable this boolean, if no PWM signal is connected or you will experience huge engine RPM resopnse delays

// Gearbox parameters ---------------------------------------------------------------------------------------------------
const boolean shifted = false; // false = linear rpm curve, true = shifting points

// Engine parameters ----------------------------------------------------------------------------------------------------
//Activate for "engine on off" functionality in combination with "Micro RC" Receiver from TheDIYGuy999. No Pulse Zero auto calibration in this case!!
const boolean engineManualOnOff = false;

// Engine RPM range
const uint32_t TOP_SPEED_MULTIPLIER = 2; // RPM multiplier: the bigger the number, the larger the rev range, 3 - 5 is a good place to start. ESP32 will crash, if > 5 @ 22'050Hz!

// Engine mass simulation
const int8_t acc = 10; // Acceleration step (10)
const int8_t dec = 6; // Deceleration step per (6)