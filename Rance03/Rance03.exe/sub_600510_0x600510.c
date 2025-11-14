// 函数: sub_600510
// 地址: 0x600510
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8138
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if (**(arg1 + 0x14) != 0)
    result.b = 1
else
    if (arg1 + 0x9c != arg3)
        sub_401ff0(arg1 + 0x9c, arg3, 0, 0xffffffff)
    
    if (arg1 + 0xb4 != arg4)
        sub_401ff0(arg1 + 0xb4, arg4, 0, 0xffffffff)
    
    HMENU eax_5 = LoadMenuA(arg2, 0x6d)
    HMENU hMenu = *(arg1 + 8)
    
    if (hMenu != 0)
        if (*(arg1 + 0xc) != 0)
            DestroyMenu(hMenu)
        
        *(arg1 + 8) = 0
    
    *(arg1 + 8) = eax_5
    *(arg1 + 0xc) = 1
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    char var_28 = 0
    sub_402110(&var_28, "CrayfishLogViewerWindowClass", 0x1c)
    int32_t var_4 = 0
    char* ecx_4 = *(arg1 + 0x14) + 0x30
    
    if (ecx_4 != &var_28)
        sub_401ff0(ecx_4, &var_28, 0, 0xffffffff)
    
    int32_t var_4_1 = 0xffffffff
    
    if (var_14_1 u>= 0x10)
        j__free(var_28.d)
    
    char* ecx_6 = *(arg1 + 0x14) + 0x48
    
    if (ecx_6 != arg3)
        sub_401ff0(ecx_6, arg3, 0, 0xffffffff)
    
    *(*(arg1 + 0x14) + 0x60) = arg2
    *(*(arg1 + 0x14) + 0x68) = 0x10cf0000
    *(*(arg1 + 0x14) + 0x7c) = 0
    *(*(arg1 + 0x14) + 0x80) = *(arg1 + 8)
    *(*(arg1 + 0x14) + 0x18) = LoadIconA(arg2, 0x66)
    int32_t var_34
    int32_t var_30
    int32_t var_2c
    
    if (sub_6014a0(arg1, &var_30, &var_38, &var_2c, &var_34) == 0)
        void* eax_13 = *(arg1 + 0x14)
        *(eax_13 + 0x6c) = 0
        *(eax_13 + 0x70) = 0
        *(eax_13 + 0x74) = 0x280
        *(eax_13 + 0x78) = 0x1e0
    else
        void* edx_1 = *(arg1 + 0x14)
        int32_t edi_2 = var_34
        int32_t esi_1 = var_2c
        int32_t ecx_10 = var_38
        *(edx_1 + 0x6c) = var_30
        *(edx_1 + 0x70) = ecx_10
        *(edx_1 + 0x74) = esi_1
        *(edx_1 + 0x78) = edi_2
    
    *(*(arg1 + 0x14) + 0x84) = arg1
    result = sub_698a60(*(arg1 + 0x14))
    
    if (result.b != 0)
        result = *(arg1 + 0x98)
        
        if (result != 0 && result[1].b != 0)
            sub_602270(**(arg1 + 0x14))
        
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
