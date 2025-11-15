// 函数: sub_51e0f0
// 地址: 0x51e0f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_2c
int32_t eax_1 = __security_cookie ^ &var_2c
void* var_24
int32_t* ecx_1 = sub_4079d0(arg1 + 0xd8, arg1 + 0xc0, &var_24, arg1 + 0xd8)
int32_t* var_28

if (*(arg1 + 0x104) u< 0x10)
    var_28 = arg1 + 0xf0
else
    var_28 = *(arg1 + 0xf0)

bool cond:2 = ecx_1[5] u< 0x10
void* eax_5 = &ecx_1[4]
var_2c = eax_5

if (not(cond:2))
    ecx_1 = *ecx_1

int32_t esi = *eax_5
int32_t eax_6 = *(arg1 + 0x100)

if (esi u< eax_6)
    eax_6 = esi

int32_t esi_1 = sub_406ac0(eax_6, var_28, ecx_1, eax_6)

if (esi_1 == 0)
    int32_t eax_8 = *(arg1 + 0x100)
    int32_t ecx_2 = *var_2c
    bool c_1 = eax_8 u< ecx_2
    
    if (eax_8 == ecx_2 || c_1)
        esi_1 = neg.d(sbb.d(esi_1, esi_1, c_1))
    else
        esi_1 = 0xffffffff

void* var_10
void* eax_10 = var_10

if (eax_10 u>= 0x10)
    eax_10 = sub_403160(var_24, eax_10 + 1, 1)

if (esi_1 != 0)
    var_2c = &partsengine::SChangedEventArgs::`vftable'{for `partsengine::IEventArgs'}
    sub_4cbd50(arg1 + 0xc, &var_2c, 0)
    sub_409670(arg1 + 0xf0, sub_4079d0(arg1 + 0xd8, arg1 + 0xc0, &var_24, arg1 + 0xd8))
    eax_10 = var_10
    
    if (eax_10 u>= 0x10)
        int32_t eax_14 = sub_403160(var_24, eax_10 + 1, 1)
        @__security_check_cookie@4(eax_1 ^ &var_2c)
        return eax_14
else if (*(arg1 + 0x1c2) != 0)
    var_2c = &partsengine::SFixedEventArgs::`vftable'{for `partsengine::IEventArgs'}
    eax_10 = sub_4cbd50(arg1 + 0xc, &var_2c, 0)
    *(arg1 + 0x1c2) = 0

@__security_check_cookie@4(eax_1 ^ &var_2c)
return eax_10
