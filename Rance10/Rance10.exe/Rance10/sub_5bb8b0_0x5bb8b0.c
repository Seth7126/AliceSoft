// 函数: sub_5bb8b0
// 地址: 0x5bb8b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$??$make_shared@U_ExceptionHolder@details@Concurrency@@ABVexception_ptr@std@@PAX@std@@YA?AV?$shared_ptr@U_ExceptionHolder@details@Concurrency@@@0@ABVexception_ptr@0@$$QAPAX@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0
int32_t* ecx = arg2
*ecx = 0
ecx[1] = 0
ecx[2] = 0
int32_t* ebx = arg3
int32_t var_8_1 = 0
int32_t* esi = *(arg1 + 0x60)
int32_t var_14_1 = 1
char arg_c

if (ebx[4] != 0)
    int32_t edi_1 = *(arg1 + 0x64)
    
    if (arg_c == 0)
        if (esi != edi_1)
            do
                int32_t** eax_11 = *esi
                
                if (ebx[5] u< 0x10)
                    arg_c.d = ebx
                else
                    arg_c.d = *ebx
                
                if (eax_11[5] u< 0x10)
                    arg3 = eax_11
                else
                    arg3 = *eax_11
                
                int32_t edx_1 = eax_11[4]
                int32_t eax_12 = ebx[4]
                
                if (edx_1 u< eax_12)
                    eax_12 = edx_1
                
                if (sub_406ac0(eax_12, arg_c.d, arg3, eax_12) == 0)
                    int32_t eax_14 = ebx[4]
                    
                    if (edx_1 u>= eax_14 && edx_1 u<= eax_14)
                        arg_c.d = *esi
                        sub_428f00(arg2, &arg_c)
                
                esi = &esi[1]
            while (esi != edi_1)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg2
    else if (esi != edi_1)
        do
            int32_t* eax_7
            
            if (ebx[5] u< 0x10)
                eax_7 = ebx
            else
                eax_7 = *ebx
            
            int32_t var_2c_2 = ebx[4]
            void* eax_8
            eax_8, ecx = sub_42cb30(*esi, eax_7, ecx)
            
            if (eax_8 != 0xffffffff)
                arg_c.d = *esi
                ecx = sub_428f00(arg2, &arg_c)
            
            esi = &esi[1]
        while (esi != edi_1)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2
else
    int32_t eax_4 = *(arg1 + 0x64)
    int32_t edi = 0
    uint32_t ebx_4 = (eax_4 - esi + 3) u>> 2
    
    if (esi u> eax_4)
        ebx_4 = 0
    
    if (ebx_4 != 0)
        do
            arg_c.d = *esi
            sub_428f00(ecx, &arg_c)
            ecx = arg2
            esi = &esi[1]
            edi += 1
        while (edi != ebx_4)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return ecx
fsbase->NtTib.ExceptionList = ExceptionList
return ecx
