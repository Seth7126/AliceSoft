// 函数: sub_67ca50
// 地址: 0x67ca50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b358
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if (**(arg1 + 0x14) != 0)
    result.b = 1
else
    if (arg1 + 0xa0 != arg3)
        sub_403590(arg1 + 0xa0, arg3, 0, 0xffffffff)
    
    if (arg1 + 0xb8 != arg4)
        sub_403590(arg1 + 0xb8, arg4, 0, 0xffffffff)
    
    HMENU eax_4 = LoadMenuA(arg2, 0xa0)
    HMENU hMenu = *(arg1 + 8)
    
    if (hMenu != 0)
        if (*(arg1 + 0xc) != 0)
            DestroyMenu(hMenu)
        
        *(arg1 + 8) = 0
    
    *(arg1 + 8) = eax_4
    *(arg1 + 0xc) = 1
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, "CrayfishLogViewerWindowClass", 0x1c)
    int32_t var_8_1 = 0
    char* ecx_4 = *(arg1 + 0x14) + 0x30
    
    if (ecx_4 != &var_2c)
        sub_403590(ecx_4, &var_2c, 0, 0xffffffff)
    
    int32_t var_8_2 = 0xffffffff
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    char* ecx_6 = *(arg1 + 0x14) + 0x48
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
    
    if (ecx_6 != arg3)
        sub_403590(ecx_6, arg3, 0, 0xffffffff)
    
    *(*(arg1 + 0x14) + 0x60) = arg2
    *(*(arg1 + 0x14) + 0x68) = 0x10cf0000
    *(*(arg1 + 0x14) + 0x7c) = 0
    *(*(arg1 + 0x14) + 0x80) = *(arg1 + 8)
    *(*(arg1 + 0x14) + 0x18) = LoadIconA(arg2, 0x65)
    int32_t var_40
    int32_t var_3c
    int32_t var_38
    int32_t var_34
    
    if (sub_67da50(arg1, &var_40, &var_3c, &var_38, &var_34) == 0)
        void* eax_14 = *(arg1 + 0x14)
        *(eax_14 + 0x6c) = 0
        *(eax_14 + 0x70) = 0
        *(eax_14 + 0x74) = 0x280
        *(eax_14 + 0x78) = 0x1e0
    else
        void* edx_1 = *(arg1 + 0x14)
        int32_t edi_2 = var_34
        int32_t esi_1 = var_38
        int32_t ecx_10 = var_3c
        *(edx_1 + 0x6c) = var_40
        *(edx_1 + 0x70) = ecx_10
        *(edx_1 + 0x74) = esi_1
        *(edx_1 + 0x78) = edi_2
    
    *(*(arg1 + 0x14) + 0x84) = arg1
    result = sub_6ced40(*(arg1 + 0x14))
    
    if (result.b != 0)
        result = *(arg1 + 0x9c)
        
        if (result != 0 && result[1].b != 0)
            sub_67e4d0(**(arg1 + 0x14))
        
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
