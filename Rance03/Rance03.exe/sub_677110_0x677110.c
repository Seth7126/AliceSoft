// 函数: sub_677110
// 地址: 0x677110
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d0448
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = __security_cookie ^ &var_50
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = arg1
void* var_34 = nullptr
int32_t var_30 = 0
int32_t var_2c = 0
int32_t var_4 = 0
sub_673e60(arg2, arg3, &var_34)
int32_t result_5 = sub_673ee0(arg2, arg3)
int32_t* var_40 = nullptr
int32_t result_4 = result_5
int32_t var_3c = 0
int32_t var_38 = 0
var_4.b = 1

if (arg2 s> 0)
    void* ebp = data_75d4fc
    int32_t var_68_2 = arg2
    
    if (sub_4a55e0(ebp + 0x178) != 0)
        int32_t var_68_3 = arg2
        struct partsengine::CPartsList::VTable** eax_7 = sub_4a52a0(ebp + 0x178)
        
        if (eax_7 != 0)
            int32_t eax_8 = eax_7[2]
            struct IInterface::VTable** vFunc_0
            
            if (arg2 s< eax_8 || eax_7[1] + eax_8 s<= arg2)
                vFunc_0 = nullptr
            label_6771fe:
                
                if (vFunc_0 != 0)
                    sub_4a4f00(vFunc_0, &var_40, arg3)
            else
                vFunc_0 = eax_7[3][arg2 - eax_8].vFunc_0
                
                if (vFunc_0 == 0)
                    vFunc_0 = sub_4e7720(eax_7, arg2)
                    goto label_6771fe
                
                sub_4a4f00(vFunc_0, &var_40, arg3)
    
    result_5 = result_4

int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
sub_402110(&var_28, 0x701d1c, 0x1e)
var_4.b = 2
sub_412d60(arg4, &var_28)
var_4.b = 1

if (var_14 u>= 0x10)
    j__free(var_28.d)

int32_t result_6 = result_5
var_4.b = 3
sub_412d60(arg4, sub_4691f0(&var_28, 0x701cfc))
var_4.b = 1

if (var_14 u>= 0x10)
    j__free(var_28.d)

int32_t ebp_3 = (var_30 - var_34) s/ 0x18
int32_t var_68_10 = ebp_3
var_4.b = 4
sub_412d60(arg4, sub_4691f0(&var_28, 0x701d40))
var_4.b = 1

if (var_14 u>= 0x10)
    j__free(var_28.d)

int32_t* edx_4 = var_40
int32_t* eax_13 = &result_4
int32_t var_44 = ebp_3
int32_t result_2 = (var_3c - edx_4) s>> 2
result_4 = result_2

if (result_2 u>= ebp_3)
    eax_13 = &var_44

int32_t result_3 = result_1
*(result_3 + 0x38) = *eax_13
int32_t eax_15

if (edx_4 != var_3c)
    eax_15 = *edx_4
else
    eax_15 = 0

*(result_3 + 0x1d0) = eax_15
int32_t edi_1 = 0
result_1 = result_2
var_44 = ebp_3
int32_t* eax_16 = &result_1

if (result_2 u>= ebp_3)
    eax_16 = &var_44

int32_t result = *eax_16
result_1 = result

if (result s> 0)
    void* esi_3 = var_34
    
    do
        var_4.b = 5
        sub_412d60(arg4, sub_4691f0(&var_28, 0x701d3c))
        var_4.b = 1
        
        if (var_14 u>= 0x10)
            j__free(var_28.d)
        
        int32_t var_68_15 = edi_1 + 1
        var_4.b = 6
        sub_412d60(arg4, sub_4691f0(&var_28, "----- %3d "))
        var_4.b = 1
        
        if (var_14 u>= 0x10)
            j__free(var_28.d)
        
        void* eax_19
        
        if (*(esi_3 + 0x14) u< 0x10)
            eax_19 = esi_3
        else
            eax_19 = *esi_3
        
        void* var_68_18 = eax_19
        var_4.b = 7
        sub_412d60(arg4, sub_4691f0(&var_28, 0x701d58))
        var_4.b = 1
        
        if (var_14 u>= 0x10)
            j__free(var_28.d)
        
        int32_t var_68_21 = var_40[edi_1]
        var_4.b = 8
        result = sub_412d60(arg4, sub_4691f0(&var_28, 0x701da0))
        var_4.b = 1
        
        if (var_14 u>= 0x10)
            result = j__free(var_28.d)
        
        edi_1 += 1
        esi_3 += 0x18
    while (edi_1 s< result_1)
    
    edx_4 = var_40

if (edx_4 != 0)
    result = j__free(edx_4)
    var_40 = nullptr
    int32_t var_3c_1 = 0
    int32_t var_38_1 = 0

void* ebx_1 = var_34

if (ebx_1 != 0)
    void* esi_4 = ebx_1
    
    if (ebx_1 != var_30)
        do
            if (*(esi_4 + 0x14) u>= 0x10)
                j__free(*esi_4)
            
            *(esi_4 + 0x14) = 0xf
            *(esi_4 + 0x10) = 0
            *esi_4 = 0
            esi_4 += 0x18
        while (esi_4 != var_30)
    
    result = j__free(ebx_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
