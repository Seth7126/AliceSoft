// 函数: sub_425c70
// 地址: 0x425c70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729697
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_28 = arg2
int32_t var_24 = 0
int32_t var_8_1 = 1
*arg2 = 0
arg2[1] = 0
arg2[2] = 0
int32_t var_24_1 = 1
int32_t eax_3 = arg3[5]
int32_t* esi

if (eax_3 u< 0x10)
    esi = arg3
else
    esi = *arg3

int32_t* eax_4

if (eax_3 u< 0x10)
    eax_4 = arg3
else
    eax_4 = *arg3

void* edi_2 = arg3[4] + eax_4

if (esi != edi_2)
    void* eax_5 = arg1
    
    do
        void* ecx = *(eax_5 + 8)
        char* eax_6 = *(eax_5 + 4)
        int32_t edx
        edx.b = *esi
        void* var_18 = ecx
        edx.b ^= 0xa4
        char var_14 = edx.b
        void* eax_7
        eax_7, edx = _memchr(eax_6, edx.b, ecx - eax_6)
        void* ecx_3 = var_18
        
        if (eax_7 != 0)
            ecx_3 = eax_7
        
        eax_5 = arg1
        
        if (ecx_3 != *(eax_5 + 8))
            void* ecx_4 = ecx_3 - *(eax_5 + 4)
            var_18 = ecx_4
            void* var_20 = ecx_4
            
            if (&var_20 u< arg2[1])
                edx = *arg2
            
            if (&var_20 u>= arg2[1] || edx u> &var_20)
                if (arg2[1] == arg2[2])
                    sub_404610(arg2, 1)
                    ecx_4 = var_18
                
                void** eax_15 = arg2[1]
                
                if (eax_15 != 0)
                    *eax_15 = ecx_4
                
                arg2[1] += 4
            else
                var_18 = (&var_20 - edx) s>> 2
                
                if (arg2[1] == arg2[2])
                    sub_404610(arg2, 1)
                
                int32_t* ecx_7 = arg2[1]
                
                if (ecx_7 != 0)
                    *ecx_7 = *(*arg2 + (var_18 << 2))
                
                arg2[1] += 4
            
            eax_5 = arg1
        else if (arg4 != 0)
            eax_5.b = var_14
            var_14 = eax_5.b
            var_18 = (*(*arg4 + 8))(&var_14)
            sub_404370(arg2, &var_18)
            eax_5 = arg1
        
        esi += 1
    while (esi != edi_2)

int32_t var_8_2 = 2
void arg_c

if (arg4 != 0)
    (*(*arg4 + 0x10))(arg4 != &arg_c)
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
