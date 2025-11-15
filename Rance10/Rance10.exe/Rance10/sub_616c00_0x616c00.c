// 函数: sub_616c00
// 地址: 0x616c00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743e84
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_78 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint8_t eax_4 = (arg4 u>> 0x1f).b ^ 1
int32_t var_68 = 0
char const* const var_80_1
void** var_7c_6
int32_t var_48
void* var_2c
int32_t var_18
int32_t ecx_3

if (eax_4 == 0)
    ecx_3 = sub_621850(&arg1[0x52], arg3)
    var_48 = ecx_3
    
    if (ecx_3 s>= 0)
        goto label_616c7f
    
    var_7c_6 = sub_419600(arg3 + 4, 0x76c5f0, &var_2c, arg3 + 4)
    int32_t var_8_3 = 1
    var_80_1 = "RunSubroutine"
label_616cf5:
    sub_612230(arg1, var_80_1, var_7c_6)
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    goto label_616d11

int32_t eax_5 = sub_621850(&arg1[0x52], arg3)
var_48 = eax_5
void* eax_6

if (eax_5 s>= 0)
    eax_6 = sub_622720(&arg1[0x52], eax_5)

if (eax_5 s< 0 || eax_6 == 0)
    var_7c_6 = sub_419600(arg3 + 4, 0x76c460, &var_2c, arg3 + 4)
    int32_t var_8_2 = 0
    var_80_1 = "RunSubroutine"
    goto label_616cf5

*(eax_6 + 0x28) = arg4
ecx_3 = var_48
label_616c7f:
int32_t eax_7
eax_7.b = *(arg3 + 0x54)

if (eax_7.b == 0)
    goto label_616d77

void* eax_8 = sub_622720(&arg1[0x52], ecx_3)

if (eax_8 != 0)
    *(eax_8 + 0x2c) = *(arg1[0x284] - 4)
label_616d77:
    
    if (sub_6106a0(arg1, var_48) == 0)
        int32_t var_8_4 = 3
        sub_612230(arg1, "RunSubroutine", sub_419600(arg3 + 4, 0x76c570, &var_2c, arg3 + 4))
        sub_403320(&var_2c)
        goto label_616d11
    
    char eax_22
    
    if (eax_4 != 0)
        eax_22 = sub_610850(arg1, arg4)
    
    if (eax_4 != 0 && eax_22 == 0)
        sub_403360(&var_2c, 0x76c534)
        int32_t var_8_5 = 4
        sub_612230(arg1, "RunSubroutine", &var_2c)
        sub_403320(&var_2c)
        goto label_616d11
    
    int32_t edx_1 = *arg3
    int32_t ecx_21 = arg1[0x74] - arg1[0x75]
    *arg1[0x386] = 3
    arg1[0x386] += 4
    *arg1[0x182] = ecx_21
    uint32_t* ecx_22 = nullptr
    arg1[0x182] += 4
    int32_t eax_26 = arg1[0x75] + edx_1
    uint32_t* var_5c = nullptr
    arg1[0x74] = eax_26
    int32_t* edx_2 = nullptr
    int32_t* var_58_1 = nullptr
    int32_t var_48_1 = 0
    int32_t var_54_1 = 0
    int32_t var_8_6 = 5
    int32_t* ebx_1 = arg5
    
    if (ebx_1 != arg6)
        do
            sub_601f90(ebx_1, &var_5c)
            ebx_1 = &ebx_1[5]
        while (ebx_1 != arg6)
        
        edx_2 = var_58_1
        ecx_22 = var_5c
        var_48_1 = var_54_1
    
    int32_t* ebx_2 = ecx_22
    
    if (ecx_22 != edx_2)
        do
            edx_2 -= 4
            
            if (ebx_2 == edx_2)
                break
            
            int32_t ecx_24 = *ebx_2
            *ebx_2 = *edx_2
            ebx_2 = &ebx_2[1]
            *edx_2 = ecx_24
        while (ebx_2 != edx_2)
    
    uint32_t* ebx_3 = var_5c
    int32_t eax_31 = *(arg3 + 0x4c)
    char eax_32
    
    if (eax_31 s> 0)
        eax_32 = sub_601050(arg1[0x489], ebx_3, eax_31)
    
    void* var_44
    
    if (eax_31 s<= 0 || eax_32 != 0)
        while (arg1[0x7a].b != 0)
            int16_t* eax_36 = arg1[0x74]
            uint32_t var_7c_17 = zx.d(*eax_36)
            arg1[0x74] = &eax_36[1]
            sub_611160(arg1)
        
        arg1[0x7a].b = 1
        
        if (eax_4 != 0 && sub_621db0(&arg1[0x52], *(arg1[0x488] - 4)) != 0)
            arg1[0x488] -= 4
            sub_610a60(arg1)
        
        int32_t var_24
        sub_602d60(&var_24, *(arg3 + 0x38), &arg1[0x7d])
        var_8_6.b = 7
        int32_t eax_42 = var_24
        int32_t var_1c
        void* ecx_37
        
        if (eax_42 != 0xffffffff)
            *arg2 = eax_42
            int32_t var_20
            arg2[1] = var_20
            arg2[2] = var_1c
            arg2[3] = var_18
            var_24 = 0xffffffff
            var_8_6.b = 0xa
            
            if (sub_602c60(&var_24) != 0)
                ecx_37 = data_7fcbb4
                
                if (ecx_37 != 0)
                    sub_621db0(ecx_37, var_1c)
        else
            var_8_6.b = 8
            sub_612230(arg1, "RunSubroutine", sub_419600(arg3 + 4, 0x76c9e0, &var_44, arg3 + 4))
            int32_t var_30
            
            if (var_30 u>= 0x10)
                sub_403160(var_44, var_30 + 1, 1)
            
            *arg2 = 0xffffffff
            arg2[1] = 0
            arg2[2] = 0
            arg2[3] = 0
            var_8_6.b = 9
            
            if (sub_602c60(&var_24) != 0)
                ecx_37 = data_7fcbb4
                
                if (ecx_37 != 0)
                    sub_621db0(ecx_37, var_1c)
    else
        var_8_6.b = 6
        sub_612230(arg1, "RunSubroutine", sub_419600(arg3 + 4, 0x76ca18, &var_44, arg3 + 4))
        sub_403320(&var_44)
        *arg2 = 0xffffffff
        arg2[1] = 0
        arg2[2] = 0
        arg2[3] = 0
    
    if (ebx_3 != 0)
        sub_403160(ebx_3, (var_48_1 - ebx_3) s>> 2, 4)
else
    int32_t var_8_1 = 2
    sub_612230(arg1, "RunSubroutine", sub_419600(arg3 + 4, 0x76c5b4, &var_2c, arg3 + 4))
    sub_403320(&var_2c)
label_616d11:
    *arg2 = 0xffffffff
    arg2[1] = 0
    arg2[2] = 0
    arg2[3] = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
