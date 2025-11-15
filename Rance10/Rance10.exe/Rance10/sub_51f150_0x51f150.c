// 函数: sub_51f150
// 地址: 0x51f150
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7390d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = 0
int32_t esi = *(arg2 + 8)
int32_t var_48 = 0
int32_t var_44 = esi

if ((esi.b & 1) != 0)
    var_44 = esi + 1

int32_t eax_7 = int.d(sub_4a78b0(*(arg2 + 0x20)))
float xmm0_2 = *(arg2 + 0x1c)

if (eax_7 s< *(arg2 + 8))
    esi = eax_7

int32_t var_50 = esi
int32_t eax_8 = int.d(sub_4a78b0(xmm0_2))
int32_t ecx_2 = *(arg2 + 8)

if (eax_8 s< ecx_2)
    ecx_2 = eax_8

int32_t* eax_9 = &var_50
int32_t var_40 = ecx_2

if (ecx_2 s>= esi)
    eax_9 = &var_40

bool cond:1 = arg3[4] != 0
int32_t ecx_4 = var_44 + (*eax_9 << 1)
*arg4 = 0
int32_t* result = arg5

if (cond:1)
    int32_t esi_1 = 0
    *result = ecx_4
    int32_t eax_12 = arg3[4]
    int32_t* result_1 = 0xf
    void* var_20_1 = nullptr
    char var_30 = 0
    sub_403490(&var_30, 0x75d347, nullptr)
    int32_t var_8_1 = 0
    
    if (eax_12 s> 0)
        do
            int32_t* eax_13
            
            if (arg3[5] u< 0x10)
                eax_13 = arg3
            else
                eax_13 = *arg3
            
            ebx.b = *(eax_13 + esi_1)
            
            if (ebx.b u< 0x81 || ebx.b u> 0x9f)
                eax_13.b = ebx.b
                eax_13.b += 0x20
            
            if ((ebx.b u< 0x81 || ebx.b u> 0x9f) && eax_13.b u> 0xf)
                int32_t* result_3 = result_1
                
                if (result_3 u< 1)
                    sub_403830(&var_30, 1, var_20_1)
                    result_3 = result_1
                
                char* eax_20 = &var_30
                
                if (result_3 u>= 0x10)
                    eax_20 = var_30.d
                
                *eax_20 = ebx.b
                char* eax_21 = &var_30
                var_20_1 = 1
                
                if (result_1 u>= 0x10)
                    eax_21 = var_30.d
                
                eax_21[1] = 0
            else
                int32_t* result_2 = result_1
                
                if (result_2 u< 1)
                    sub_403830(&var_30, 1, var_20_1)
                    result_2 = result_1
                
                char* eax_14 = &var_30
                
                if (result_2 u>= 0x10)
                    eax_14 = var_30.d
                
                *eax_14 = ebx.b
                char* eax_15 = &var_30
                var_20_1 = 1
                
                if (result_1 u>= 0x10)
                    eax_15 = var_30.d
                
                esi_1 += 1
                eax_15[1] = 0
                
                if (arg3[5] u< 0x10)
                    sub_405500(&var_30, 1, *(arg3 + esi_1))
                else
                    sub_405500(&var_30, 1, (*arg3)[esi_1])
            
            int32_t ecx_10 = 0
            
            if (sub_641fe0(arg2, &var_30, &var_40) != 0)
                ecx_10 = var_40
            
            ebx = var_48 + *(arg1 + 0x1b4) + ecx_10
            var_48 = ebx
            sub_403490(&var_30, 0x75d33f, nullptr)
            esi_1 += 1
        while (esi_1 s< eax_12)
    
    int32_t eax_26 = *arg4
    
    if (eax_26 s< ebx)
        eax_26 = ebx
    
    *arg4 = eax_26
    
    if (arg6 != 0)
        *arg4 = eax_26 - *(arg1 + 0x1b4)
    
    result = result_1
    
    if (result u>= 0x10)
        result = sub_403160(var_30.d, result + 1, 1)
else
    *result = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
