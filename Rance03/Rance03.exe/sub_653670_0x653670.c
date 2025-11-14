// 函数: sub_653670
// 地址: 0x653670
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ceec8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_58
int32_t eax_2 = __security_cookie ^ &var_58
int32_t __saved_edi
int32_t var_6c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg4
int32_t edx = 0xf
void** ebx = arg3
int32_t* var_50 = esi
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
int32_t var_4 = 0

if (arg2 s> 0)
    int32_t i_1 = arg2
    int32_t i
    
    do
        sub_4057c0(&var_28, 0x700b98, 2)
        i = i_1
        i_1 -= 1
    while (i != 1)
    edx = var_14
    esi = var_50

if (ebx[5] u>= 0x10)
    ebx = *ebx

int32_t var_70 = arg1
char* eax_5 = &var_28
void** var_74 = ebx

if (edx u>= 0x10)
    eax_5 = var_28.d

char* var_78 = eax_5
var_4.b = 1
char var_40
sub_412d60(esi, sub_4691f0(&var_40, "%s%s %10d1"))
var_4.b = 0
int32_t var_2c

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_2c_1 = 0xf
int32_t var_30 = 0
var_40 = 0
int32_t ecx_12

if (arg1 s<= 0)
    ecx_12 = 0
else
    void* esi_1 = data_75d4fc
    int32_t var_70_3 = arg1
    
    if (sub_4a55e0(esi_1 + 0x178) == 0)
        ecx_12 = 0
    else
        int32_t var_70_4 = arg1
        struct partsengine::CPartsList::VTable** eax_8 = sub_4a52a0(esi_1 + 0x178)
        
        if (eax_8 == 0)
            ecx_12 = 0
        else
            int32_t eax_9 = eax_8[2]
            struct IInterface::VTable** vFunc_0
            void* eax_11
            
            if (arg1 s< eax_9 || eax_8[1] + eax_9 s<= arg1)
                vFunc_0 = nullptr
            label_6537b4:
                
                if (vFunc_0 == 0)
                    ecx_12 = 0
                else
                    eax_11 = vFunc_0[0x16]
                    ecx_12 = (*(eax_11 + 0x98) - *(eax_11 + 0x94)) s>> 2
            else
                vFunc_0 = eax_8[3][arg1 - eax_9].vFunc_0
                
                if (vFunc_0 == 0)
                    vFunc_0 = sub_4e7720(eax_8, arg1)
                    goto label_6537b4
                
                eax_11 = vFunc_0[0x16]
                ecx_12 = (*(eax_11 + 0x98) - *(eax_11 + 0x94)) s>> 2

int32_t ebx_1 = 0
int32_t var_54 = ecx_12
int32_t result = ecx_12 - 1

if (ecx_12 s> 0)
    int32_t ebp_1 = var_54
    
    do
        int32_t var_2c_2 = 0xf
        void* const edx_2 = &data_700ba8
        int32_t var_30_1 = 0
        
        if (result != ebx_1)
            edx_2 = &data_700bac
        
        var_40 = 0
        void* ecx_14
        
        if (*edx_2 != 0)
            void* const ecx_16 = edx_2
            
            do
                result.b = *ecx_16
                ecx_16 += 1
            while (result.b != 0)
            
            ecx_14 = ecx_16 - (edx_2 + 1)
        else
            ecx_14 = nullptr
        
        sub_402110(&var_40, edx_2, ecx_14)
        var_4.b = 2
        int32_t eax_18
        
        if (arg1 s<= 0)
            eax_18 = 0
        else
            int32_t eax_14 = *(data_75d4fc + 0x194)
            int32_t esi_5 = arg1 s/ 0x2710
            int32_t edx_5 = eax_14
            void** ecx_18 = *(eax_14 + 4)
            
            while (*(ecx_18 + 0xd) == 0)
                if (ecx_18[4] s>= esi_5)
                    edx_5 = ecx_18
                    ecx_18 = *ecx_18
                else
                    ecx_18 = ecx_18[2]
            
            int32_t* eax_15
            
            if (edx_5 == eax_14 || esi_5 s< *(edx_5 + 0x10))
                int32_t var_44 = eax_14
                eax_15 = &var_44
            else
                var_54 = edx_5
                eax_15 = &var_54
            
            int32_t eax_16 = *eax_15
            
            if (eax_16 == *(data_75d4fc + 0x194))
                eax_18 = 0
            else
                void* edx_6 = *(eax_16 + 0x14)
                
                if (edx_6 == 0)
                    eax_18 = 0
                else
                    int32_t esi_6 = *(edx_6 + 8)
                    
                    if (arg1 s< esi_6 || *(edx_6 + 4) + esi_6 s<= arg1)
                        eax_16.b = 0
                    else
                        eax_16.b = *(*(edx_6 + 0xc) + ((arg1 - esi_6) << 2)) != 0
                    
                    if (eax_16.b == 0)
                        eax_18 = 0
                    else
                        eax_18 = sub_4f21e0(arg1, ebx_1)
        
        sub_653670(eax_18, arg2 + 1, &var_40, var_50)
        var_4.b = 0
        
        if (var_2c_2 u>= 0x10)
            j__free(var_40.d)
        
        ebx_1 += 1
        result = ebp_1 - 1
    while (ebx_1 s< ebp_1)

if (var_14 u>= 0x10)
    result = j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_58)
return result
