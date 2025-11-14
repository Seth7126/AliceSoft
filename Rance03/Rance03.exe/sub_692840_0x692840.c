// 函数: sub_692840
// 地址: 0x692840
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d1908
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_40 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg2
int32_t var_24 = 0
struct dpsound::CSoundData::VTable** ebp = arg6
void* ebx = arg5
int32_t var_4 = 0
int32_t* arg_10

if (esi != arg4 && ebx != ebp)
    int32_t* edi_1 = ebx + 0x1c
    
    while (true)
        int32_t ecx = *(esi + 0x1c)
        int32_t* edx
        
        if (*(esi + 0x20) u< 0x10)
            edx = esi + 0xc
        else
            edx = *(esi + 0xc)
        
        int32_t ebp_1 = *edi_1
        void* eax_3
        
        if (edi_1[1] u< 0x10)
            eax_3 = &edi_1[-4]
        else
            eax_3 = edi_1[-4]
        
        int32_t eax_4 = ecx
        
        if (ebp_1 u< ecx)
            eax_4 = ebp_1
        
        int32_t eax_5 = sub_405190(eax_4, edx, eax_3, eax_4)
        bool cond:1_1 = eax_5 s< 0
        
        if (eax_5 == 0)
            int32_t ecx_2 = *(esi + 0x1c)
            
            if (ebp_1 u>= ecx_2)
                eax_5.b = ebp_1 != ecx_2
            else
                eax_5 = 0xffffffff
            
            cond:1_1 = eax_5 s< 0
        
        eax_5.b = cond:1_1
        int32_t* ecx_3 = &arg_10
        
        if (eax_5.b == 0)
            sub_693750(ecx_3, esi)
            esi += 0x44
            
            if (esi == arg4)
                ebp = arg6
                break
        else
            sub_693750(ecx_3, ebx)
            ebp = arg6
            ebx += 0x44
            edi_1 = &edi_1[0x11]
            
            if (ebx == ebp)
                break

int32_t var_48 = 0
int32_t var_44_4 = arg8
int32_t* var_20
int32_t* eax_7 = sub_68f150(arg8, esi, &var_20, arg4, nullptr, 0, 0)
int32_t* esi_1 = var_20
int32_t eax_8 = eax_7[4]

if (esi_1 != 0)
    int32_t var_18
    
    if (esi_1 != var_18)
        do
            (**esi_1)(0)
            esi_1 = &esi_1[0x11]
        while (esi_1 != var_18)
        
        esi_1 = var_20
    
    j__free(esi_1)

int32_t var_48_1 = 0
int32_t var_44_6 = eax_8
sub_68f150(eax_8, ebx, arg3, ebp, nullptr, 0, 0)
int32_t var_4_1 = 0xffffffff
int32_t* esi_2 = arg_10

if (esi_2 != 0)
    if (esi_2 != arg7)
        do
            (**esi_2)(0)
            esi_2 = &esi_2[0x11]
        while (esi_2 != arg7)
        
        esi_2 = arg_10
    
    j__free(esi_2)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
