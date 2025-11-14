// 函数: sub_50d820
// 地址: 0x50d820
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c1a78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_38 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i = *(arg1 + 0x2b0)

if (i s< 0)
    i = neg.d(i)

int32_t** ebx = nullptr
int32_t* edi = nullptr
int32_t ecx = 0
int32_t** var_18 = nullptr
int32_t* var_14 = nullptr
int32_t var_10 = 0
int32_t var_4 = 0
int32_t* result

do
    int32_t esi = i s% 0xa
    int32_t var_20
    result = &var_20
    var_20 = esi
    
    if (&var_20 u>= edi || ebx u> &var_20)
        if (edi == ecx)
            result = sub_415950(&var_18, 1)
            ecx = var_10
            edi = var_14
            ebx = var_18
        
        if (edi != 0)
            *edi = esi
    else
        int32_t esi_2 = (&var_20 - ebx) s>> 2
        
        if (edi == ecx)
            result = sub_415950(&var_18, 1)
            ecx = var_10
            edi = var_14
            ebx = var_18
        
        if (edi != 0)
            result = ebx[esi_2]
            *edi = result
    
    edi = &edi[1]
    i s/= 0xa
    var_14 = edi
while (i != 0)

void* edx_3 = arg1
int32_t ebp_4 = *(edx_3 + 0x2bc)

if (ebp_4 != 0)
    result = (edi - ebx) s>> 2
    
    if (result u< ebp_4)
        int32_t i_1 = i
        
        do
            if (&i_1 u>= edi || ebx u> &i_1)
                if (edi == ecx)
                    sub_415950(&var_18, 1)
                    ecx = var_10
                    edi = var_14
                    ebx = var_18
                
                if (edi != 0)
                    *edi = 0
            else
                int32_t esi_4 = (&i_1 - ebx) s>> 2
                
                if (edi == ecx)
                    sub_415950(&var_18, 1)
                    ecx = var_10
                    edi = var_14
                    ebx = var_18
                
                if (edi != 0)
                    *edi = ebx[esi_4]
            
            edi = &edi[1]
            var_14 = edi
            result = (edi - ebx) s>> 2
        while (result u< ebp_4)
        
        edx_3 = arg1

if (*(edx_3 + 0x2b4) == 0)
    result = &var_18
    
    if (arg2 != &var_18)
        int32_t** eax_18 = *arg2
        *arg2 = ebx
        ebx = eax_18
        int32_t eax_19 = arg2[1]
        arg2[1] = edi
        int32_t var_14_1 = eax_19
        result = arg2[2]
        var_18 = ebx
        arg2[2] = ecx
        int32_t* result_1 = result
else
    int32_t edi_2 = (edi - ebx) s>> 2
    
    if (edi_2 != 0)
        int32_t** ebp_5 = ebx
        int32_t ebx_1 = 0
        
        do
            if (ebx_1 != 0 && ebx_1 == ebx_1 u/ 3 * 3)
                sub_4158d0(arg2, arg1 + 8)
            
            result = arg2[1]
            int32_t edx_6
            
            if (ebp_5 u< result)
                edx_6 = *arg2
            
            if (ebp_5 u>= result || edx_6 u> ebp_5)
                if (result == arg2[2])
                    result = sub_415950(arg2, 1)
                
                int32_t** ecx_13 = arg2[1]
                
                if (ecx_13 != 0)
                    result = *ebp_5
                    *ecx_13 = result
            else
                if (result == arg2[2])
                    result = sub_415950(arg2, 1)
                
                int32_t** edx_7 = arg2[1]
                
                if (edx_7 != 0)
                    result = *(*arg2 + ((ebp_5 - edx_6) s>> 2 << 2))
                    *edx_7 = result
            
            arg2[1] += 4
            ebx_1 += 1
            ebp_5 = &ebp_5[1]
        while (ebx_1 u< edi_2)
        
        ebx = var_18

if (*(arg1 + 0x2b0) s< 0)
    result = sub_4158d0(arg2, arg1 + 4)

int32_t** edx_8 = arg2[1]
int32_t** esi_6 = *arg2

while (esi_6 != edx_8)
    edx_8 -= 4
    
    if (esi_6 == edx_8)
        break
    
    int32_t* ecx_16 = *esi_6
    result = *edx_8
    *esi_6 = result
    esi_6 = &esi_6[1]
    *edx_8 = ecx_16

if (ebx != 0)
    result = j__free(ebx)

fsbase->NtTib.ExceptionList = ExceptionList
return result
