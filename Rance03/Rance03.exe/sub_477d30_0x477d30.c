// 函数: sub_477d30
// 地址: 0x477d30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b68b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_34 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** edx = arg1
void** var_20 = edx
int32_t* ecx = nullptr
int32_t* esi = nullptr
int32_t ebp = 0
int32_t* var_18 = nullptr
int32_t* var_14 = nullptr
int32_t var_10 = 0
int32_t var_4 = 0
void** arg_4
void** i = arg_4
void** i_1 = i

while (i != 0)
    int32_t* eax_3 = ecx
    
    if (ecx != esi)
        while (*eax_3 != i)
            eax_3 = &eax_3[1]
            
            if (eax_3 == esi)
                goto label_477da9
        
        if (eax_3 != esi)
            break
    
label_477da9:
    
    if (&i_1 u>= esi || ecx u> &i_1)
        if (esi == ebp)
            sub_415950(&var_18, 1)
            ebp = var_10
            esi = var_14
            edx = var_20
        
        if (esi != 0)
            *esi = i
    else
        int32_t ebx_2 = (&i_1 - ecx) s>> 2
        
        if (esi == ebp)
            sub_415950(&var_18, 1)
            ebp = var_10
            esi = var_14
            ecx = var_18
            edx = var_20
        
        if (esi != 0)
            *esi = ecx[ebx_2]
    
    int32_t* ecx_3 = edx[3]
    esi = &esi[1]
    var_14 = esi
    
    if (ecx_3 == 0)
        ecx = var_18
        break
    
    void** i_2 = (*(*ecx_3 + 4))(i)
    ecx = var_18
    i = i_2
    edx = var_20
    
    if (i == 0xffffffff)
        break
    
    i_1 = i

void** edi = edx[1]
void** edx_1 = edi
void** eax_6 = edi[1]

while (*(eax_6 + 0xd) == 0)
    if (eax_6[4] s>= 0)
        edx_1 = eax_6
        eax_6 = *eax_6
    else
        eax_6 = eax_6[2]

bool cond:0_1

if (edx_1 != edi)
    cond:0_1 = edx_1[4] s<= 0
    arg_4 = edx_1

if (edx_1 == edi || not(cond:0_1))
    arg_4 = edi

void** result = arg_4
void** ebp_1 = var_20[1]
int128_t xmm1

if (result != ebp_1)
    if (result[5].b == 0)
        xmm1 = result[6]
    else
        xmm1 = zx.o(0)
    
    arg_4 = xmm1
else
    xmm1 = 0x3f800000
    arg_4 = 0x3f800000

if (esi != ecx)
    do
        void** eax_7 = ebp_1[1]
        esi = &esi[-1]
        void** edx_3 = ebp_1
        int32_t edi_1 = *esi
        void** eax_8
        
        if (*(eax_7 + 0xd) != 0)
            var_20 = ebp_1
            eax_8 = &var_20
        else
            do
                if (eax_7[4] s>= edi_1)
                    edx_3 = eax_7
                    eax_7 = *eax_7
                else
                    eax_7 = eax_7[2]
            while (*(eax_7 + 0xd) == 0)
            
            if (edx_3 == ebp_1 || edi_1 s< edx_3[4])
                var_20 = ebp_1
                eax_8 = &var_20
            else
                arg_4 = edx_3
                eax_8 = &arg_4
        
        result = *eax_8
        float xmm0_1
        
        if (result == ebp_1)
            xmm0_1 = 1f
        else if (result[5].b == 0)
            xmm0_1 = result[6]
        else
            xmm0_1 = (zx.o(0)).d
        
        xmm1 = xmm0_1 f* xmm1
    while (esi != ecx)
    
    arg_4 = xmm1

if (ecx != 0)
    result = j__free(ecx)

fsbase->NtTib.ExceptionList = ExceptionList
return result
