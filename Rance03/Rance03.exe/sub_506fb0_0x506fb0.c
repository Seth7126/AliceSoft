// 函数: sub_506fb0
// 地址: 0x506fb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t arg_4
int32_t arg_8
void* arg_c
int32_t arg_10
sub_506c00(arg1, &arg_4, &arg_8, &arg_c, &arg_10)

if (sub_506b50(arg1, arg_4, arg_8, arg_c, arg_10) != 0)
    return 0

int32_t arg_14
bool cond:0 = arg_14 s<= 0xff
int32_t var_8
int32_t* eax_2 = &var_8
var_8 = 0xff

if (cond:0)
    eax_2 = &arg_14

int32_t edx = *eax_2
int32_t* eax_3 = &var_8
int32_t arg_18

if (arg_18 s<= 0xff)
    eax_3 = &arg_18

var_8 = 0xff
int32_t arg_1c
bool cond:2 = arg_1c s<= 0xff
arg_14 = edx
int32_t ecx_1 = *eax_3
int32_t* eax_4 = &var_8

if (cond:2)
    eax_4 = &arg_1c

var_8 = 0xff
arg_18 = ecx_1
int32_t eax_5 = *eax_4
arg_1c = eax_5
int32_t* eax_6 = &var_8

if (edx s>= 0)
    eax_6 = &arg_14

var_8 = 0
var_8 = *eax_6
int32_t* eax_8 = &arg_14

if (ecx_1 s>= 0)
    eax_8 = &arg_18

arg_14 = 0
arg_18 = *eax_8
arg_14 = 0
int32_t* eax_10 = sub_5065e0(arg1)
struct partsengine::CSpriteEngineWrapper::VTable ecx_3 = arg1

if (ecx_3 != 0)
    int32_t* edx_1 = &arg_14
    
    if (eax_5 s>= 0)
        edx_1 = &arg_1c
    
    (*(*ecx_3 + 0x2c))(eax_10, arg_4, arg_8, arg_c, arg_10, var_8, arg_18, *edx_1)

eax_10.b = 1
return eax_10
