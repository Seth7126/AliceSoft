// 函数: sub_459830
// 地址: 0x459830
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b7ee0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_44 = ebx
sub_402110(ebx + 4, 0x6da15a, nullptr)
int32_t* eax_6 = ebx + 0x1c
sub_402110(eax_6, 0x6da15f, nullptr)
sub_402110(ebx + 0x34, 0x6da15b, nullptr)
int32_t* var_38 = nullptr
int32_t var_34 = 0
int32_t var_30 = 0
int32_t var_4 = 0
sub_605aa0(arg3, &var_38)
int32_t* ebp_1 = var_38
int32_t* esi = ebp_1

if (ebp_1 != var_34)
    do
        int32_t* edx_1
        
        if (esi[5] u< 0x10)
            edx_1 = esi
        else
            edx_1 = *esi
        
        int32_t var_14_1 = 0xf
        int32_t var_18_1 = 0
        char var_28 = 0
        void* eax_7
        
        if (*edx_1 != 0)
            int32_t* eax_8 = edx_1
            void* ebx_1 = eax_8 + 1
            char i
            
            do
                i = *eax_8
                eax_8 += 1
            while (i != 0)
            eax_7 = eax_8 - ebx_1
            ebx = var_44
        else
            eax_7 = nullptr
        
        sub_402110(&var_28, edx_1, eax_7)
        var_4.b = 1
        var_4.b = 0
        ebx.b = sub_459a00(ebx, arg2, &var_28).b == 0
        
        if (var_14_1 u>= 0x10)
            j__free(var_28.d)
        
        if (ebx.b != 0)
            ebx.b = 0
            goto label_459990
        
        ebx = var_44
        esi = &esi[6]
    while (esi != var_34)

if (eax_6 != arg3)
    sub_401ff0(eax_6, arg3, 0, 0xffffffff)

ebx.b = 1
label_459990:

if (ebp_1 != 0)
    int32_t* esi_1 = ebp_1
    
    if (ebp_1 != var_34)
        do
            if (esi_1[5] u>= 0x10)
                j__free(*esi_1)
            
            esi_1[5] = 0xf
            esi_1[4] = 0
            *esi_1 = 0
            esi_1 = &esi_1[6]
        while (esi_1 != var_34)
    
    j__free(ebp_1)

void** result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
