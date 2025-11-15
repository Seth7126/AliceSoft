// 函数: sub_573220
// 地址: 0x573220
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c8a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_1c = ebx
int32_t var_28 = 0
int32_t esi = *arg2
int32_t ecx = arg2[1]
int32_t edi = arg2[2]
arg2 = arg2[3]
int32_t eax_5 = *(ebx + 0x28)
int32_t var_14 = ecx
void* edx_1

if (esi s< eax_5 && ecx s>= 0)
    edx_1 = *(ebx + 0x2c)

int32_t* result
int32_t* result_1

if (esi s>= eax_5 || ecx s< 0 || edi s>= edx_1 || arg2 s< 0)
    result = result_1
    *result = 0
    result[1] = 0
    *result = sub_4f2cd0()
else
    if (esi s< 0)
        esi = 0
    
    int32_t var_24_1 = esi
    
    if (ecx s>= eax_5)
        var_14 = eax_5 - 1
    
    if (edi s< 0)
        edi = 0
    
    int32_t var_18_1 = edi
    
    if (arg2 s>= edx_1)
        arg2 = edx_1 - 1
    
    int32_t** var_34 = nullptr
    int32_t var_30_1 = 0
    var_34 = sub_4f2cd0()
    int32_t* eax_10 = arg2
    int32_t var_8_1 = 0
    
    if (edi s<= eax_10)
        int32_t ecx_1 = var_14
        
        do
            int32_t var_20_1 = esi
            
            if (var_24_1 s<= ecx_1)
                do
                    int32_t ecx_3 = *(ebx + 0x28) * edi
                    int32_t ecx_4 = ecx_3 + esi
                    
                    if (ecx_3 + esi s>= 0)
                        int32_t eax_11
                        int32_t edx_4
                        edx_4:eax_11 = muls.dp.d(0x2aaaaaab, *(ebx + 0x10) - *(ebx + 0xc))
                        int32_t edx_5 = edx_4 s>> 1
                        
                        if (ecx_4 s< (edx_5 u>> 0x1f) + edx_5)
                            int32_t eax_15 = *(ebx + 0xc)
                            int32_t ecx_5 = ecx_4 * 3
                            int32_t ebx_1 = *(eax_15 + (ecx_5 << 2) + 4)
                            int32_t* edi_1 = *(eax_15 + (ecx_5 << 2))
                            
                            if (edi_1 != ebx_1)
                                do
                                    int32_t** esi_1 = var_34
                                    int32_t* eax_16 = sub_4f3050(edi_1)
                                    void* var_2c
                                    sub_575150(&var_34, &var_2c, esi_1, &eax_16[4], eax_16)
                                    edi_1 = &edi_1[1]
                                while (edi_1 != ebx_1)
                                
                                esi = var_20_1
                            
                            edi = var_18_1
                            ebx = var_1c
                    
                    ecx_1 = var_14
                    esi += 1
                    var_20_1 = esi
                while (esi s<= ecx_1)
                
                eax_10 = arg2
            
            esi = var_24_1
            edi += 1
            var_18_1 = edi
        while (edi s<= eax_10)
    
    result = result_1
    *result = 0
    result[1] = 0
    int32_t** eax_18 = sub_4f2cd0()
    *result = var_34
    int32_t edx_6 = result[1]
    var_34 = eax_18
    result[1] = var_30_1
    int32_t var_30_2 = edx_6
    sub_4f27c0(&var_34, &result_1, *eax_18, eax_18)
    sub_403160(var_34, 1, 0x14)
fsbase->NtTib.ExceptionList = ExceptionList
return result
