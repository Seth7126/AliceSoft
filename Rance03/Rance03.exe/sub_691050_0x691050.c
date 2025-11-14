// 函数: sub_691050
// 地址: 0x691050
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d17d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg3
int32_t ecx = arg7
void* edi = arg8
int32_t var_4 = 0
int32_t ebx = ecx * 2
int32_t* var_20
int32_t var_18

if (ebx s<= edi)
    int32_t ebp_3 = ecx * 0x11
    
    do
        int32_t var_40_1 = arg9
        void* edx = esi + (ebp_3 << 2)
        int32_t var_4c_1 = 0
        int32_t var_48_1 = 0
        int32_t var_44_1 = arg6
        int32_t* eax_5 = edx + (ebp_3 << 2)
        int32_t* eax_6 = sub_6930c0(eax_5, esi, &var_20, edx, edx, eax_5, 0, 0)
        int32_t* esi_1 = var_20
        arg6 = eax_6[4]
        
        if (esi_1 != 0)
            if (esi_1 != var_18)
                do
                    (**esi_1)(0)
                    esi_1 = &esi_1[0x11]
                while (esi_1 != var_18)
                
                esi_1 = var_20
            
            j__free(esi_1)
        
        esi = edx + (ebp_3 << 2)
        edi -= ebx
    while (edi s>= ebx)
    
    ecx = arg7

int32_t* result
int32_t* esi_2

if (edi s> ecx)
    int32_t var_40_4 = arg9
    void* edx_3 = esi + ecx * 0x44
    int32_t var_4c_2 = 0
    int32_t var_48_2 = 0
    int32_t var_44_3 = arg6
    result = sub_6930c0(arg6, esi, &var_20, edx_3, edx_3, arg2, 0, 0)
    esi_2 = var_20
    
    if (esi_2 != 0)
        if (esi_2 == var_18)
            result = j__free(esi_2)
        else
            do
                (**esi_2)(0)
                esi_2 = &esi_2[0x11]
            while (esi_2 != var_18)
            
            result = j__free(var_20)
else
    int32_t var_44_2 = 0
    int32_t var_40_3 = arg6
    result = sub_68f150(arg6, esi, &var_20, arg2, nullptr, 0, 0)
    esi_2 = var_20
    
    if (esi_2 != 0)
        if (esi_2 == var_18)
            result = j__free(esi_2)
        else
            do
                (**esi_2)(0)
                esi_2 = &esi_2[0x11]
            while (esi_2 != var_18)
            
            result = j__free(var_20)
int32_t var_4_1 = 0xffffffff
int32_t* esi_3 = arg4

if (esi_3 != 0)
    if (esi_3 != arg5)
        do
            (**esi_3)(0)
            esi_3 = &esi_3[0x11]
        while (esi_3 != arg5)
        
        esi_3 = arg4
    
    result = j__free(esi_3)

fsbase->NtTib.ExceptionList = ExceptionList
return result
