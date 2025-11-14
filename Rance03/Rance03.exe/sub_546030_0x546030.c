// 函数: sub_546030
// 地址: 0x546030
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c47c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
enum MESSAGEBOX_RESULT result
int32_t ecx_21
int32_t edx_3

if (*(arg1 + 0x1c) == 0)
    void** edi_1 = arg2
    int128_t var_34_1 = data_709450
    int128_t var_4c_1 = zx.o(0)
    float var_14_1 = 1f
    int64_t var_3c
    
    if (edi_1[0x57] == 0)
        arg2 = nullptr
    else if (edi_1[0x58].b == 0)
        void** esi_1 = *(edi_1[0x57] + 0x10)
        arg2 = esi_1
        
        if (esi_1 != 0)
            int128_t xmm0_2
            struct sealengine::CFrameMulColor::VTable* var_80
            
            if (esi_1[0xf] != esi_1[0x10])
                xmm0_2 = *(sub_54ab10(esi_1 + 0x3c, edi_1[0x4b], &var_80) + 4)
            else
                xmm0_2 = data_709450
            var_34_1 = xmm0_2
            int128_t xmm0_3
            struct sealengine::CFrameAddColor::VTable* var_94
            
            if (esi_1[0x12] != esi_1[0x13])
                xmm0_3 = *(sub_54ac00(esi_1 + 0x48, edi_1[0x4b], &var_94) + 4)
            else
                xmm0_3 = zx.o(0)
            var_4c_1 = xmm0_3
            float xmm0_4
            
            if (esi_1[0x15] != esi_1[0x16])
                xmm0_4 = sub_54acf0(&esi_1[0x15], edi_1[0x4b], &var_3c)[1]
            else
                xmm0_4 = 1f
            
            var_14_1 = xmm0_4
    else
        arg2 = nullptr
    
    EnterCriticalSection(edi_1[0x10] + 4)
    CRITICAL_SECTION* lpCriticalSection = edi_1[0x10] + 4
    int32_t esi_2 = edi_1[0xe]
    var_3c = *(edi_1 + 0x30)
    LeaveCriticalSection(lpCriticalSection)
    void* eax_13 = *(arg1 + 0x18)
    *(eax_13 + 0x4c) = var_3c
    *(eax_13 + 0x54) = esi_2
    void** esi_3 = arg2
    *(*(arg1 + 0x18) + 0x58) = edi_1[0x14]
    *(*(arg1 + 0x18) + 0x5c) = edi_1[0x15]
    *(*(arg1 + 0x18) + 0x60) = edi_1[0x16]
    *(*(arg1 + 0x18) + 0x64) = edi_1[0x17]
    *(*(arg1 + 0x18) + 0x68) = edi_1[0x18]
    *(*(arg1 + 0x18) + 0x6c) = edi_1[0x19]
    *(*(arg1 + 0x18) + 0x130) = edi_1[0x7c]
    *(*(arg1 + 0x18) + 0x12a) = *(edi_1 + 0xbd)
    *(*(arg1 + 0x18) + 0x12b) = *(edi_1 + 0xbe)
    *(*(arg1 + 0x18) + 0x12c) = *(edi_1 + 0xbf)
    *(*(arg1 + 0x18) + 0x12d) = *(edi_1[0x30] + 8) != 0
    void* ecx_5 = *(arg1 + 0x18) + 0x24
    float xmm2_5 = edi_1[0x21] f* var_34_1:4.d
    float xmm1_2 = edi_1[0x22] f* var_34_1:8.d
    float xmm0_15 = edi_1[0x23] f* var_34_1:0xc.d
    float var_5c = edi_1[0x20] f* var_34_1.d
    float var_58_1 = xmm2_5
    float var_54_1 = xmm1_2
    float var_50_1 = xmm0_15
    sub_54a3e0(ecx_5, edi_1[0x4b], &var_5c, esi_3)
    float xmm2_7 = edi_1[0x29] f+ var_4c_1:4.d
    float xmm1_4 = edi_1[0x2a] f+ var_4c_1:8.d
    float xmm0_17 = edi_1[0x2b] f+ var_4c_1:0xc.d
    float var_6c = var_4c_1.d f+ edi_1[0x28]
    float var_68_1 = xmm2_7
    float var_64_1 = xmm1_4
    float var_60_1 = xmm0_17
    sub_54a510(*(arg1 + 0x18) + 0x24, edi_1[0x4b], &var_6c, esi_3)
    sub_54a640(*(arg1 + 0x18) + 0x24, edi_1[0x2d] f* var_14_1, edi_1[0x4b], esi_3)
    int32_t xmm0_18 = edi_1[0x2e]
    void* ecx_11 = *(arg1 + 0x18)
    int32_t* i = *(ecx_11 + 0x28)
    
    if (i != *(ecx_11 + 0x2c))
        do
            void* ecx_12 = *i
            i = &i[1]
            *(ecx_12 + 0xb4) = xmm0_18
        while (i != *(ecx_11 + 0x2c))
        
        esi_3 = arg2
    
    sub_54a760(*(arg1 + 0x18) + 0x24, edi_1[0x4b], esi_3)
    int32_t* ecx_16 = *(arg1 + 0x18) + 0x10c
    
    if (*ecx_16 == ecx_16[1])
        int32_t var_24 = 0
        int32_t var_20_1 = 0
        int32_t var_1c_1 = 0
        int32_t var_4 = 0
        char eax_28
        eax_28, ecx_16 = sub_53f330(edi_1, &var_24)
        
        if (eax_28 != 0)
            ecx_16 = sub_556630(*(arg1 + 0x18) + 0x10c, &var_24)
        
        int32_t var_4_1 = 0xffffffff
        int32_t eax_29 = var_24
        
        if (eax_29 != 0)
            ecx_16 = j__free(eax_29)
    
    int32_t* var_a8_3 = ecx_16
    result, ecx_21, edx_3 =
        sub_553aa0(*(arg1 + 0x18), &edi_1[0x69], arg3, arg4, arg5, edi_1[0x7b], arg6)

if (*(arg1 + 0x1c) != 0 || result.b != 0)
    result.b = 1
else
    sub_59f4e0(result, edx_3, ecx_21, 0x6e3bc0, eax_2)
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
