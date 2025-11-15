// 函数: sub_639ec0
// 地址: 0x639ec0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745c78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = data_7fcbb8
int32_t* var_14 = ebx
void* var_28 = nullptr
int32_t var_24 = 0
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x4bda12f7, ebx[0x1f] - ebx[0x1e])
int32_t var_20 = 0
int32_t edx_3 = edx_2 s>> 5
uint32_t eax_5 = edx_3 u>> 0x1f
int32_t var_8_1 = 0
int32_t i = 0
void* esi

if (eax_5 != neg.d(edx_3))
    int32_t edi_1 = 0
    
    do
        int32_t eax_7
        int32_t edx_4
        edx_4:eax_7 = muls.dp.d(0x4bda12f7, ebx[0x1f] - ebx[0x1e])
        int32_t edx_5 = edx_4 s>> 5
        
        if (i u< (edx_5 u>> 0x1f) + edx_5)
            void* ecx_2 = ebx[0x1e]
            void* ecx_3 = ecx_2 + edi_1
            
            if (ecx_2 != neg.d(edi_1))
                if (*(ecx_3 + 0x2c) != 0 && sub_6013d0(ecx_3) == 0)
                    sub_424db0(&var_28, ecx_3 + 0x1c)
                
                ebx = var_14
        
        i += 1
        edi_1 += 0x6c
    while (i u< eax_5 + edx_3)
    
    esi = var_28

if (eax_5 == neg.d(edx_3) || esi == var_24)
    ebx.b = (*(*arg1 + 0x48))(eax_2)
else
    int32_t ecx_9 = (var_24 - esi) s/ 0x18
    
    if ((*(*arg1 + 0x40))(ecx_9) == 0)
    label_639fee:
        ebx.b = 0
    else
        int32_t edi_2 = 0
        
        if (ecx_9 s> 0)
            do
                int32_t* eax_17 = (*(*arg1 + 0x14))(edi_2)
                
                if (eax_17 == 0)
                    goto label_639fee
                
                void* edx_8
                
                if (*(esi + 0x14) u< 0x10)
                    edx_8 = esi
                else
                    edx_8 = *esi
                
                (*(*eax_17 + 4))(edx_8)
                edi_2 += 1
                esi += 0x18
            while (edi_2 s< ecx_9)
        
        ebx.b = 1

sub_417070(&var_28)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
