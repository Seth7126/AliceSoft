// 函数: sub_4832a0
// 地址: 0x4832a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729918
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = arg4
void* esi_1 = **(arg1 + 8)
*eax_3 = 0

if (esi_1 != *(arg1 + 8))
    void* ebx_1 = arg3
    
    while (true)
        if (*(esi_1 + 0xc) - *(esi_1 + 8) u> ebx_1)
            sub_700660(arg2, *(esi_1 + 8), ebx_1)
            *arg4 += ebx_1
            char* var_1c
            sub_431b80(&var_1c, *(esi_1 + 0xc) - *(esi_1 + 8) - ebx_1)
            int32_t var_8_1 = 0
            int32_t var_18
            void* esi_5 = var_18 - var_1c
            char* ebx_2 = var_1c
            sub_700660(ebx_2, *(esi_1 + 8) + ebx_1, esi_5)
            sub_405950(esi_1 + 8, esi_5)
            eax_3 = sub_700660(*(esi_1 + 8), ebx_2, esi_5)
            int32_t var_14
            
            if (ebx_2 != 0)
                eax_3 = sub_403160(ebx_2, var_14 - ebx_2, 1)
            break
        
        sub_700660(arg2, *(esi_1 + 8), *(esi_1 + 0xc) - *(esi_1 + 8))
        arg2 = &arg2[*(esi_1 + 0xc) - *(esi_1 + 8)]
        ebx_1 += *(esi_1 + 8) - *(esi_1 + 0xc)
        int32_t** esi_2 = *(arg1 + 8)
        *arg4 += *(esi_1 + 0xc) - *(esi_1 + 8)
        int32_t* esi_3 = *esi_2
        *esi_3[1] = *esi_3
        *(*esi_3 + 4) = esi_3[1]
        *(arg1 + 0xc) -= 1
        void* ecx_3 = esi_3[2]
        
        if (ecx_3 != 0)
            sub_403160(ecx_3, esi_3[4] - ecx_3, 1)
            esi_3[2] = 0
            esi_3[3] = 0
            esi_3[4] = 0
        
        eax_3 = sub_403160(esi_3, 1, 0x14)
        
        if (ebx_1 == 0)
            break
        
        void** eax_18 = *(arg1 + 8)
        esi_1 = *eax_18
        
        if (esi_1 == eax_18)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_18

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
