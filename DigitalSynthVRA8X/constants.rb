

MIDI_CH         = 0
SERIAL_SPEED    = 38400
SAMPLING_RATE   = 15625
FREQUENCY_MAX   = 7812
BIT_DEPTH       = 8
NOTE_NUMBER_MIN = 24
NOTE_NUMBER_MAX = 84
A4_PITCH        = 440.0

OSC_PHASE_RESOLUTION_BITS              = 16
OSC_WAVE_TABLE_AMPLITUDE               = 64
OSC_WAVE_TABLE_SAMPLES_BITS            = 8
FILTER_TABLE_FRACTION_BITS             = 14
EG_LEVEL_MAX                           = (127 << 1) << 8
EG_CONTROLLER_STEPS_BITS               = 5
EG_DECAY_RELEASE_RATE_DENOMINATOR_BITS = 8

DATA_BYTE_MAX         = 0x7F
STATUS_BYTE_INVALID   = 0x7F
DATA_BYTE_INVALID     = 0x80
STATUS_BYTE_MIN       = 0x80
NOTE_OFF              = 0x80
NOTE_ON               = 0x90
CONTROL_CHANGE        = 0xB0
SYSTEM_MESSAGE_MIN    = 0xF0
SYSTEM_EXCLUSIVE      = 0xF0
TIME_CODE             = 0xF1
SONG_POSITION         = 0xF2
SONG_SELECT           = 0xF3
TUNE_REQUEST          = 0xF6
EOX                   = 0xF7
REAL_TIME_MESSAGE_MIN = 0xF8
ACTIVE_SENSING        = 0xFE

OSC_MODE       = 16
OSC_COLOR      = 17
MOD_RATE       = 18
MOD_DEPTH      = 19
LPF_CUTOFF_ENV = 20
LPF_RESONANCE  = 21
ENV_A          = 22
ENV_D_R        = 23
ALL_NOTES_OFF  = 123

OSC_MODE_SAW     = 0
OSC_MODE_RM_PWM  = 32
OSC_MODE_PWM_SAW = 64
OSC_MODE_SYNC_FM = 96
OSC_MODE_FM      = 127
