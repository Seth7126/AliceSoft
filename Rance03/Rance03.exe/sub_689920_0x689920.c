// 函数: sub_689920
// 地址: 0x689920
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d1406
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_15c
int32_t eax_2 = __security_cookie ^ &var_15c
int32_t __saved_edi
int32_t var_170 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_150 = 0
int32_t var_120 = 0xf
int32_t var_124 = 0
char var_134 = 0
int32_t var_4 = 0
int32_t var_174 = *(arg1 + 8)
void* const var_178

if (*(arg1 + 4) == 0)
    var_178 = "Se%4d"
else
    var_178 = &data_703844

int32_t var_11c
int32_t* eax_5 = sub_4691f0(&var_11c, var_178)

if (&var_134 != eax_5)
    if (var_120 u>= 0x10)
        j__free(var_134.d)
    
    var_120 = 0xf
    int32_t var_124_1 = 0
    var_134 = 0
    sub_4030b0(&var_134, eax_5)

int32_t var_108

if (var_108 u>= 0x10)
    j__free(var_11c)

int32_t var_f0 = 0xf
int32_t var_f4 = 0
char var_104 = 0
sub_402110(&var_104, "    ", 4)
var_4.b = 1
int32_t i_2
char var_174_4

if (*(arg1 + 0x1c) u> 0xf)
    int32_t i
    
    for (i = 0xf; i s> 3; i -= 1)
        void* eax_8
        
        if (*(arg1 + 0x20) u< 0x10)
            eax_8 = arg1 + 0xc
        else
            eax_8 = *(arg1 + 0xc)
        
        void* eax_10
        
        if (*(eax_8 - i + 0xf) u>= 0x81)
            if (*(arg1 + 0x20) u< 0x10)
                eax_10 = arg1 + 0xc
            else
                eax_10 = *(arg1 + 0xc)
        
        if (*(eax_8 - i + 0xf) u>= 0x81 && *(eax_10 - i + 0xf) u<= 0x9f)
            i -= 1
        else
            void* eax_12
            
            if (*(arg1 + 0x20) u< 0x10)
                eax_12 = arg1 + 0xc
            else
                eax_12 = *(arg1 + 0xc)
            
            if (*(eax_12 - i + 0xf) u>= 0xe0)
                void* eax_14
                
                if (*(arg1 + 0x20) u< 0x10)
                    eax_14 = arg1 + 0xc
                else
                    eax_14 = *(arg1 + 0xc)
                
                if (*(eax_14 - i + 0xf) u<= 0xef)
                    i -= 1
    
    var_4.b = 2
    sub_403110(&var_104, sub_403070(arg1 + 0xc, &var_11c, 0, 0xf - i), nullptr, 0xffffffff)
    var_4.b = 1
    
    if (var_108 u>= 0x10)
        j__free(var_11c)
    
    var_174_4 = 0x2e
    i_2 = i
else
    sub_403110(&var_104, arg1 + 0xc, nullptr, 0xffffffff)
    var_174_4 = 0x20
    i_2 = 0xf - *(arg1 + 0x1c)

sub_4031c0(&var_104, i_2, var_174_4)
int32_t var_138 = 0xf
int32_t var_13c = 0
char var_14c = 0
sub_402110(&var_14c, 0x6da947, nullptr)
var_4.b = 3
int32_t eax_18 = *(arg1 + 0x24)
int32_t var_d4
int32_t var_c0
char var_bc
char var_a4
char var_8c

switch (eax_18)
    case 0
        int32_t var_174_7 = 0
        sub_408340(&var_14c, sub_4691f0(&var_11c, "      "))
        
        if (var_108 u>= 0x10)
            j__free(var_11c)
    case 1
        int32_t var_174_10 = 1
        sub_408340(&var_14c, sub_4691f0(&var_a4, "    "))
        sub_401fb0(&var_a4)
    case 2
        int32_t var_174_12 = 2
        sub_408340(&var_14c, sub_4691f0(&var_bc, "    "))
        sub_401fb0(&var_bc)
    case 3
        int32_t var_174_14 = 3
        sub_408340(&var_14c, sub_4691f0(&var_8c, "    "))
        sub_401fb0(&var_8c)
    case 5
        int32_t var_174_16 = 5
        void var_2c
        sub_408340(&var_14c, sub_4691f0(&var_2c, "    "))
        sub_401fb0(&var_2c)
    default
        int32_t var_174_18 = eax_18
        int32_t* eax_24 = sub_4691f0(&var_d4, "    ")
        
        if (&var_14c != eax_24)
            if (var_138 u>= 0x10)
                j__free(var_14c.d)
            
            var_138 = 0xf
            int32_t var_13c_1 = 0
            var_14c = 0
            sub_4030b0(&var_14c, eax_24)
        
        if (var_c0 u>= 0x10)
            j__free(var_d4)

void* const edx = &data_7039b8
int32_t var_d8 = 0xf

if (*(arg1 + 0x34) == 0)
    edx = &data_703984

int32_t var_dc = 0
char var_ec = 0
void* ecx_17

if (*edx != 0)
    void* const ecx_18 = edx
    void* esi_2 = ecx_18 + 1
    char i_1
    
    do
        i_1 = *ecx_18
        ecx_18 += 1
    while (i_1 != 0)
    ecx_17 = ecx_18 - esi_2
else
    ecx_17 = nullptr

sub_402110(&var_ec, edx, ecx_17)
var_4.b = 4
int32_t var_158
int32_t* eax_25 = &var_158
float xmm0_1 = *(arg1 + 0x38) * 1000f
int32_t var_154 = 0
int32_t ecx_20 = int.d(xmm0_1 + 0.5f)
var_158 = ecx_20

if (ecx_20 s<= 0)
    eax_25 = &var_154

int32_t esi_3 = *eax_25
int32_t var_174_22 = esi_3 s% 0xa
int32_t var_178_2 = esi_3 s/ 0xa
char var_44
sub_4691f0(&var_44, "   %3d.%d%% ")
var_4.b = 5
int32_t eax_30
int32_t edx_3
edx_3:eax_30 = sx.q(*(arg1 + 0x3c))
int32_t var_184 = mods.dp.d(edx_3:eax_30, 0x3e8)
int32_t eax_32
int32_t edx_5
edx_5:eax_32 = sx.q(divs.dp.d(edx_3:eax_30, 0x3e8))
int32_t var_188 = mods.dp.d(edx_5:eax_32, 0x3c)
int32_t var_18c = divs.dp.d(edx_5:eax_32, 0x3c)
char var_5c
sub_4691f0(&var_5c, "  %02d:%02d.%03d ")
var_4.b = 6
int32_t eax_35
int32_t edx_7
edx_7:eax_35 = sx.q(*(arg1 + 0x40))
int32_t var_198 = mods.dp.d(edx_7:eax_35, 0x3e8)
int32_t eax_37
int32_t edx_9
edx_9:eax_37 = sx.q(divs.dp.d(edx_7:eax_35, 0x3e8))
int32_t var_19c = mods.dp.d(edx_9:eax_37, 0x3c)
int32_t var_1a0 = divs.dp.d(edx_9:eax_37, 0x3c)
char var_74
sub_4691f0(&var_74, "  %02d:%02d.%03d ")
var_4.b = 7
int32_t* eax_40 = sub_40d1c0(&var_104, &var_134, &var_11c, &var_104)
var_4.b = 8
char* eax_41 = sub_410ad0(eax_40, eax_40, &var_d4, &var_14c)
var_4.b = 9
char* eax_42 = sub_410ad0(eax_41, eax_41, &var_a4, &var_ec)
var_4.b = 0xa
char* eax_43 = sub_410ad0(eax_42, eax_42, &var_bc, &var_44)
var_4.b = 0xb
char* eax_44 = sub_410ad0(eax_43, eax_43, &var_8c, &var_5c)
var_4.b = 0xc
sub_410ad0(eax_44, eax_44, arg2, &var_74)
int32_t var_78

if (var_78 u>= 0x10)
    j__free(var_8c.d)

int32_t var_78_1 = 0xf
int32_t var_7c = 0
var_8c = 0
int32_t var_a8

if (var_a8 u>= 0x10)
    j__free(var_bc.d)

int32_t var_a8_1 = 0xf
int32_t var_ac = 0
var_bc = 0
int32_t var_90

if (var_90 u>= 0x10)
    j__free(var_a4.d)

int32_t var_90_1 = 0xf
int32_t var_94 = 0
var_a4 = 0

if (var_c0 u>= 0x10)
    j__free(var_d4)

int32_t var_c0_1 = 0xf
int32_t var_c4 = 0
var_d4.b = 0

if (var_108 u>= 0x10)
    j__free(var_11c)

int32_t var_108_1 = 0xf
int32_t var_10c = 0
var_11c.b = 0
int32_t var_60

if (var_60 u>= 0x10)
    j__free(var_74.d)

int32_t var_60_1 = 0xf
int32_t var_64 = 0
var_74 = 0
int32_t var_48

if (var_48 u>= 0x10)
    j__free(var_5c.d)

int32_t var_48_1 = 0xf
int32_t var_4c = 0
var_5c = 0
int32_t var_30

if (var_30 u>= 0x10)
    j__free(var_44.d)

int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0

if (var_d8 u>= 0x10)
    j__free(var_ec.d)

int32_t var_d8_1 = 0xf
int32_t var_dc_1 = 0
var_ec = 0

if (var_138 u>= 0x10)
    j__free(var_14c.d)

int32_t var_138_1 = 0xf
int32_t var_13c_2 = 0
var_14c = 0

if (var_f0 u>= 0x10)
    j__free(var_104.d)

int32_t var_f0_1 = 0xf
int32_t var_f4_1 = 0
var_104 = 0

if (var_120 u>= 0x10)
    j__free(var_134.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_15c)
return arg2
