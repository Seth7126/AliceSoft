// 函数: sub_553b70
// 地址: 0x553b70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i = *(arg1 + 0x2b0)

if (i s< 0)
    i = neg.d(i)

int32_t ebx = 0
int32_t* edi = nullptr
int32_t i_2 = 0
int32_t var_28 = 0
int32_t* var_24 = nullptr
int32_t i_1 = 0
int32_t i_5 = 0
int32_t var_8_1 = 0
int32_t* result

do
    int32_t i_3 = i s% 0xa
    result = &i_1
    i_1 = i_3
    
    if (&i_1 u>= edi || ebx u> &i_1)
        if (edi == i_2)
            result = sub_404610(&var_28, 1)
            i_2 = i_5
            edi = var_24
            ebx = var_28
        
        if (edi != 0)
            *edi = i_3
    else
        int32_t esi_1 = (&i_1 - ebx) s>> 2
        
        if (edi == i_2)
            result = sub_404610(&var_28, 1)
            i_2 = i_5
            edi = var_24
            ebx = var_28
        
        if (edi != 0)
            result = *(ebx + (esi_1 << 2))
            *edi = result
    
    i s/= 0xa
    edi = &edi[1]
    var_24 = edi
while (i != 0)

i_1 = i_2
int32_t edx_4 = *(arg1 + 0x2bc)
int32_t var_1c_2 = edx_4

if (edx_4 != 0)
    result = (edi - ebx) s>> 2
    
    if (result u< edx_4)
        i_1 = i
        
        do
            if (&i_1 u>= edi || ebx u> &i_1)
                if (edi == i_2)
                    sub_404610(&var_28, 1)
                    i_2 = i_5
                    edi = var_24
                    ebx = var_28
                    edx_4 = var_1c_2
                
                if (edi != 0)
                    *edi = 0
            else
                int32_t esi_3 = (&i_1 - ebx) s>> 2
                
                if (edi == i_2)
                    sub_404610(&var_28, 1)
                    i_2 = i_5
                    edi = var_24
                    ebx = var_28
                    edx_4 = var_1c_2
                
                if (edi != 0)
                    *edi = *(ebx + (esi_3 << 2))
            
            edi = &edi[1]
            var_24 = edi
            result = (edi - ebx) s>> 2
        while (result u< edx_4)
        
        i_1 = i_2

int32_t* esi_4 = arg2
int32_t i_4

if (*(arg1 + 0x2b4) == 0)
    result = &var_28
    
    if (esi_4 == &var_28)
        i_4 = i_1
    else
        int32_t eax_23 = *esi_4
        *esi_4 = ebx
        ebx = eax_23
        result = esi_4[1]
        esi_4[1] = edi
        i_4 = esi_4[2]
        var_28 = ebx
        int32_t* result_1 = result
        esi_4[2] = i_2
        int32_t i_6 = i_4
else
    int32_t edi_2 = (edi - ebx) s>> 2
    
    if (edi_2 != 0)
        arg2 = ebx
        int32_t ebx_1 = 0
        
        do
            if (ebx_1 != 0 && ebx_1 == ebx_1 u/ 3 * 3)
                int32_t eax_17 = esi_4[1]
                void* ecx_7 = arg1 + 0xc
                int32_t edx_8
                
                if (ecx_7 u< eax_17)
                    edx_8 = *esi_4
                
                int32_t* edx_9
                
                if (ecx_7 u>= eax_17 || edx_8 u> ecx_7)
                    if (eax_17 == esi_4[2])
                        sub_404610(esi_4, 1)
                    
                    edx_9 = esi_4[1]
                    
                    if (edx_9 != 0)
                        *edx_9 = *ecx_7
                else
                    if (eax_17 == esi_4[2])
                        sub_404610(esi_4, 1)
                    
                    edx_9 = esi_4[1]
                    
                    if (edx_9 != 0)
                        *edx_9 = *(*esi_4 + ((ecx_7 - edx_8) s>> 2 << 2))
                esi_4[1] += 4
            
            result = esi_4[1]
            int32_t edx_10
            
            if (arg2 u< result)
                edx_10 = *esi_4
            
            if (arg2 u>= result || edx_10 u> arg2)
                if (result == esi_4[2])
                    result = sub_404610(esi_4, 1)
                
                int32_t** ecx_17 = esi_4[1]
                
                if (ecx_17 != 0)
                    result = *arg2
                    *ecx_17 = result
            else
                if (result == esi_4[2])
                    result = sub_404610(esi_4, 1)
                
                int32_t** edx_11 = esi_4[1]
                
                if (edx_11 != 0)
                    result = *(*esi_4 + ((arg2 - edx_10) s>> 2 << 2))
                    *edx_11 = result
            
            esi_4[1] += 4
            ebx_1 += 1
            arg2 += 4
        while (ebx_1 u< edi_2)
        
        ebx = var_28
    
    i_4 = i_1

if (*(arg1 + 0x2b0) s< 0)
    result = esi_4[1]
    void* ecx_19 = arg1 + 8
    int32_t edx_12
    
    if (ecx_19 u< result)
        edx_12 = *esi_4
    
    int32_t** edx_13
    
    if (ecx_19 u>= result || edx_12 u> ecx_19)
        if (result == esi_4[2])
            result = sub_404610(esi_4, 1)
        
        edx_13 = esi_4[1]
        
        if (edx_13 != 0)
            result = *ecx_19
            *edx_13 = result
    else
        if (result == esi_4[2])
            result = sub_404610(esi_4, 1)
        
        edx_13 = esi_4[1]
        
        if (edx_13 != 0)
            result = *(*esi_4 + ((ecx_19 - edx_12) s>> 2 << 2))
            *edx_13 = result
    esi_4[1] += 4

int32_t** edx_14 = esi_4[1]
int32_t** esi_5 = *esi_4

while (esi_5 != edx_14)
    edx_14 -= 4
    
    if (esi_5 == edx_14)
        break
    
    int32_t* ecx_24 = *esi_5
    result = *edx_14
    *esi_5 = result
    esi_5 = &esi_5[1]
    *edx_14 = ecx_24

if (ebx != 0)
    result = sub_403160(ebx, (i_4 - ebx) s>> 2, 4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
