// 函数: sub_48a0e0
// 地址: 0x48a0e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edx = arg1
void* var_14 = edx
int32_t ecx = 0
int32_t* ebx = nullptr
int32_t* esi = nullptr
int32_t* var_28 = nullptr
int32_t* var_24 = nullptr
int32_t var_18 = 0
int32_t var_20 = 0
int32_t var_8_1 = 0
int32_t i_1
int32_t i = i_1
i_1 = i
void** var_1c

if (i != 0)
    while (true)
        int32_t* eax_3 = ebx
        
        if (ebx != esi)
            while (*eax_3 != i)
                eax_3 = &eax_3[1]
                
                if (eax_3 == esi)
                    goto label_48a158
            
            if (eax_3 != esi)
                break
        
    label_48a158:
        
        if (&i_1 u>= esi || ebx u> &i_1)
            if (esi == ecx)
                sub_404610(&var_28, 1)
                esi = var_24
                ebx = var_28
                edx = var_14
                var_18 = var_20
            
            if (esi != 0)
                *esi = i
        else
            int32_t eax_5 = (&i_1 - ebx) s>> 2
            var_1c = eax_5
            
            if (esi == ecx)
                sub_404610(&var_28, 1)
                esi = var_24
                ebx = var_28
                edx = var_14
                var_18 = var_20
                eax_5 = var_1c
            
            if (esi != 0)
                *esi = ebx[eax_5]
        
        int32_t* ecx_3 = *(edx + 0xc)
        esi = &esi[1]
        var_24 = esi
        
        if (ecx_3 == 0)
            break
        
        edx = var_14
        i = (*(*ecx_3 + 4))(i)
        
        if (i == 0xffffffff)
            break
        
        i_1 = i
        
        if (i == 0)
            break
        
        ecx = var_18

i_1 = 0
sub_42eb70(edx + 4, &var_1c, &i_1)
void* ecx_5 = edx + 4
void** eax_11 = var_1c
int32_t edi = *ecx_5
int128_t i_3

if (eax_11 != edi)
    if (eax_11[5].b == 0)
        i_3 = eax_11[6]
    else
        i_3 = zx.o(0)
    
    i_1 = i_3
else
    i_3 = 0x3f800000
    i_1 = 0x3f800000

if (esi != ebx)
    do
        int32_t i_2 = esi[-1]
        esi = &esi[-1]
        i_1 = i_2
        sub_42eb70(ecx_5, &var_1c, &i_1)
        eax_11 = var_1c
        float xmm0_1
        
        if (eax_11 == edi)
            xmm0_1 = 1f
        else if (eax_11[5].b == 0)
            xmm0_1 = eax_11[6]
        else
            xmm0_1 = (zx.o(0)).d
        
        ecx_5 = edx + 4
        i_3 = xmm0_1 f* i_3
    while (esi != ebx)
    
    i_1 = i_3

if (ebx == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_11

int32_t eax_15 = sub_403160(ebx, (var_18 - ebx) s>> 2, 4)
fsbase->NtTib.ExceptionList = ExceptionList
return eax_15
