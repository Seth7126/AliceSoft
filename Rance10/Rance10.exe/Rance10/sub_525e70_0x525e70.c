// 函数: sub_525e70
// 地址: 0x525e70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7396d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_64 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_54 = nullptr
int32_t var_50 = 0
int32_t var_4c = 0
int32_t var_8_1 = 0
int32_t* var_48
__builtin_memset(&var_48, 0, 0x24)
var_8_1.b = 3
void** var_30
int32_t* var_68 = &var_30
int32_t* var_3c
void* result = sub_522d10(&arg1[2], &var_54, &var_48, &var_3c)
int32_t* edx = var_54
int32_t var_14 = 0
uint32_t ecx_4 = (var_50 - edx + 3) u>> 2

if (edx u> var_50)
    ecx_4 = 0

int32_t* esi = edx
struct partsengine::IEventArgs::partsengine::SKeyTriggerEventArgs::VTable* const var_24

if (ecx_4 != 0)
    void* edx_1 = &arg1[0x79]
    int32_t ecx_8
    
    do
        int32_t ebx_1 = *esi
        
        if (ebx_1 == 1 && arg1[0x6b].b != 0)
            int32_t* ecx_5 = *arg1
            
            if (*(ecx_5[0x14] + 0x1a8) != 0)
                (*(*ecx_5 + 0x2c))(3)
                arg1[1].b = ebx_1.b
                edx_1 = &arg1[0x79]
        
        var_24 = &partsengine::SKeyTriggerEventArgs::`vftable'{for `partsengine::IEventArgs'}
        int32_t var_20_1 = ebx_1
        result = sub_4cbd50(edx_1, &var_24, 0)
        edx_1 = &arg1[0x79]
        ecx_8 = var_14 + 1
        esi = &esi[1]
        var_14 = ecx_8
    while (ecx_8 != ecx_4)

int32_t* ecx_9 = var_3c
int32_t* esi_1 = ecx_9
int32_t var_38
uint32_t ebx_5 = (var_38 - ecx_9 + 3) u>> 2

if (ecx_9 u> var_38)
    ebx_5 = 0

if (ebx_5 != 0)
    void* ecx_10 = &arg1[0x79]
    int32_t edi_1 = 0
    void* var_18_1 = ecx_10
    
    do
        int32_t var_20_2 = *esi_1
        var_24 = &partsengine::SKeyDownEventArgs::`vftable'{for `partsengine::IEventArgs'}
        result = sub_4cbd50(ecx_10, &var_24, 0)
        ecx_10 = var_18_1
        esi_1 = &esi_1[1]
        edi_1 += 1
    while (edi_1 != ebx_5)

void** edx_2 = var_30
int32_t ebx_6 = 0
int32_t var_2c
uint32_t ecx_14 = (var_2c - edx_2 + 3) u>> 2

if (edx_2 u> var_2c)
    ecx_14 = 0

void** esi_2 = edx_2
uint32_t var_1c_1 = ecx_14

if (ecx_14 != 0)
    do
        result = *esi_2
        
        if (result == 1 || result == 2)
            if (arg1[0x6b].b != 0)
            label_526021:
                void* result_1 = result
                var_24 = &partsengine::SKeyPressEventArgs::`vftable'{for `partsengine::IEventArgs'}
                result = sub_4cbd50(&arg1[0x79], &var_24, 0)
                ecx_14 = var_1c_1
        else if (result != 4 || arg1[0x6b].b != 0)
            goto label_526021
        
        ebx_6 += 1
        esi_2 = &esi_2[1]
    while (ebx_6 != ecx_14)

int32_t* edx_3 = var_48
int32_t ebx_7 = 0
int32_t var_44
uint32_t ecx_19 = (var_44 - edx_3 + 3) u>> 2

if (edx_3 u> var_44)
    ecx_19 = 0

int32_t* esi_3 = edx_3

if (ecx_19 != 0)
    do
        result = sub_5261c0(arg1, *esi_3)
        ebx_7 += 1
        esi_3 = &esi_3[1]
    while (ebx_7 != ecx_19)

void** ecx_21 = var_30
int32_t var_28

if (ecx_21 != 0)
    result = sub_403160(ecx_21, (var_28 - ecx_21) s>> 2, 4)
int32_t* ecx_22 = var_3c
int32_t var_34

if (ecx_22 != 0)
    result = sub_403160(ecx_22, (var_34 - ecx_22) s>> 2, 4)
int32_t* ecx_23 = var_48
int32_t var_40

if (ecx_23 != 0)
    result = sub_403160(ecx_23, (var_40 - ecx_23) s>> 2, 4)
int32_t* ecx_24 = var_54

if (ecx_24 != 0)
    result = sub_403160(ecx_24, (var_4c - ecx_24) s>> 2, 4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
