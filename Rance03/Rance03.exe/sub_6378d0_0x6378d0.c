// 函数: sub_6378d0
// 地址: 0x6378d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8ba8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = *(arg1 + 4)
void* esi = *result
*arg4 = 0

if (esi != result)
    void* ebx_1 = arg3
    
    do
        if (*(esi + 0xc) - *(esi + 8) u> ebx_1)
            sub_69d850(arg2, *(esi + 8), ebx_1, eax_2)
            void* eax_17 = *(esi + 0xc) - *(esi + 8)
            *arg4 += ebx_1
            int32_t* var_18
            sub_448e90(&var_18, eax_17 - ebx_1)
            int32_t var_4 = 0
            int32_t* ebp_1 = var_18
            int32_t var_14
            void* esi_4 = var_14 - ebp_1
            sub_69d850(ebp_1, *(esi + 8) + ebx_1, esi_4)
            sub_403540(esi + 8, esi_4)
            result = sub_69d850(*(esi + 8), ebp_1, esi_4)
            
            if (ebp_1 != 0)
                result = j__free(ebp_1)
            
            break
        
        sub_69d850(arg2, *(esi + 8), *(esi + 0xc) - *(esi + 8), eax_2)
        arg2 += *(esi + 0xc) - *(esi + 8)
        ebx_1 += *(esi + 8) - *(esi + 0xc)
        int32_t* esi_1 = *(arg1 + 4)
        *arg4 += *(esi + 0xc) - *(esi + 8)
        int32_t* esi_2 = *esi_1
        *esi_2[1] = *esi_2
        *(*esi_2 + 4) = esi_2[1]
        *(arg1 + 8) -= 1
        int32_t eax_15 = esi_2[2]
        
        if (eax_15 != 0)
            j__free(eax_15)
            esi_2[2] = 0
            esi_2[3] = 0
            esi_2[4] = 0
        
        result = j__free(esi_2)
        
        if (ebx_1 == 0)
            break
        
        result = *(arg1 + 4)
        esi = *result
    while (esi != result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
