// 函数: sub_45ff40
// 地址: 0x45ff40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bf8c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* i = *(arg1 + 8)

for (int32_t edx = *(arg1 + 0xc); i != edx; i = &i[1])
    void* ecx
    ecx.b = *(*i + 5)
    
    if (ecx.b != 0)
        int32_t* esi = *(arg1 + 8)
        int32_t esi_1
        
        if (esi == edx)
        label_45ffb5:
            esi_1 = 0xffffffff
        else
            while (true)
                void* ecx_3
                ecx_3.b = *(*esi + 5)
                
                if (ecx_3.b != 0)
                    esi_1 = (esi - *(arg1 + 8)) s>> 2
                    break
                
                esi = &esi[1]
                
                if (esi == edx)
                    goto label_45ffb5
        
        int32_t eax_3
        
        if (esi_1 s>= 0 && (edx - *(arg1 + 8)) s>> 2 s> esi_1)
            eax_3 = *(*(arg1 + 8) + (esi_1 << 2))
            
            if (eax_3 != 0)
                int32_t var_8_1 = 0
                sub_42e7b0(*(*(arg1 + 0x20) + 4))
                void* eax_7 = *(arg1 + 0x20)
                *(eax_7 + 4) = eax_7
                int32_t* eax_8 = *(arg1 + 0x20)
                *eax_8 = eax_8
                void* eax_9 = *(arg1 + 0x20)
                *(eax_9 + 8) = eax_9
                *(arg1 + 0x24) = 0
                int32_t var_8_2 = 1
                int32_t* ecx_6 = sub_432200(*(*(arg1 + 0x28) + 4))
                void* eax_11 = *(arg1 + 0x28)
                *(eax_11 + 4) = eax_11
                int32_t* eax_12 = *(arg1 + 0x28)
                *eax_12 = eax_12
                void* eax_13 = *(arg1 + 0x28)
                int32_t var_8_3 = 0xffffffff
                *(eax_13 + 8) = eax_13
                *(arg1 + 0x2c) = 0
                int32_t eax_15 = *(eax_3 + 8)
                
                if (eax_15 == 1)
                    int32_t var_28_4 = arg2
                    int32_t eax_18 = sub_460770(arg1, esi_1, ecx_6)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_18
                
                if (eax_15 == 3)
                    int32_t var_28_3 = arg2
                    int32_t eax_17 = sub_460af0(arg1, esi_1, ecx_6)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_17
        
        eax_3.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_3

i.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return i
