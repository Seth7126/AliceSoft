// 函数: sub_562950
// 地址: 0x562950
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_7 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c59a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_50
int32_t eax_2 = __security_cookie ^ &var_50
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_50 = arg1
int32_t var_38 = 0xf
void* var_3c = nullptr
char var_4c = 0
sub_402110(&var_4c, 0x6e4ce0, 0xf)
int32_t var_4 = 0
char* esi = &var_4c
char* edx = &var_4c
void* var_68 = var_50

if (var_38 u>= 0x10)
    esi = var_4c.d

if (var_38 u>= 0x10)
    edx = var_4c.d

void* esi_1 = arg1
sub_468ff0(arg1 + 4, *(esi_1 + 8), edx, var_3c + esi)
int32_t var_4_1 = 0xffffffff

if (var_38 u>= 0x10)
    j__free(var_4c.d)

int32_t eax_7
int32_t edx_1
edx_1:eax_7 = muls.dp.d(0x38e38e39, *(arg2 + 0x1a0) - *(arg2 + 0x19c))
int32_t edx_2 = edx_1 s>> 3
bool result
struct sealengine::CEmitterPos::VTable* const var_28

if ((edx_2 u>> 0x1f) + edx_2 s> 0)
    int32_t ebx_1 = 0
    int32_t eax_11
    int32_t edx_3
    edx_3:eax_11 = muls.dp.d(0x38e38e39, *(arg2 + 0x1a0) - *(arg2 + 0x19c))
    int32_t edx_4 = edx_3 s>> 3
    
    if ((edx_4 u>> 0x1f) + edx_4 s<= 0)
    label_562bd9:
        int32_t var_14_2 = 0xf
        int32_t var_18_2 = 0
        var_28.b = 0
        sub_402110(&var_28, "\r\n\r\n", 4)
        int32_t var_4_6 = 4
        struct sealengine::CEmitterPos::VTable* const esi_3 = &var_28
        struct sealengine::CEmitterPos::VTable* const edx_10 = &var_28
        void* var_68_6 = var_50
        
        if (var_14_2 u>= 0x10)
            esi_3 = var_28
        
        if (var_14_2 u>= 0x10)
            edx_10 = var_28
        
        void* ebx_2 = var_50
        sub_468ff0(ebx_2 + 4, *(ebx_2 + 8), edx_10, var_18_2 + esi_3)
        
        if (var_14_2 u>= 0x10)
            j__free(var_28)
        
        result = true
    else
        int32_t ebp_1 = 0
        
        while (sub_562c70(esi_1, *(arg2 + 0x19c) + ebp_1) != 0)
            int32_t eax_17
            int32_t edx_5
            edx_5:eax_17 = muls.dp.d(0x38e38e39, *(arg2 + 0x1a0) - *(arg2 + 0x19c))
            int32_t edx_6 = edx_5 s>> 3
            
            if (ebx_1 s< (edx_6 u>> 0x1f) - 1 + edx_6)
                int32_t var_38_2 = 0xf
                int32_t var_3c_1 = 0
                var_4c = 0
                sub_402110(&var_4c, 0x6e4cf0, 3)
                int32_t var_4_4 = 3
                char* esi_2 = &var_4c
                int32_t* edx_7 = &var_4c
                void* var_68_4 = var_50
                
                if (var_38_2 u>= 0x10)
                    esi_2 = var_4c.d
                
                if (var_38_2 u>= 0x10)
                    edx_7 = var_4c.d
                
                esi_1 = var_50
                sub_468ff0(esi_1 + 4, *(esi_1 + 8), edx_7, &esi_2[var_3c_1])
                int32_t var_4_5 = 0xffffffff
                
                if (var_38_2 u>= 0x10)
                    j__free(var_4c.d)
            
            ebx_1 += 1
            int32_t eax_24
            int32_t edx_8
            edx_8:eax_24 = muls.dp.d(0x38e38e39, *(arg2 + 0x1a0) - *(arg2 + 0x19c))
            ebp_1 += 0x24
            int32_t edx_9 = edx_8 s>> 3
            
            if (ebx_1 s>= (edx_9 u>> 0x1f) + edx_9)
                goto label_562bd9
        
        result = false
else
    int64_t xmm0_1 = _mm_unpacklo_ps(zx.o(0), 0)
    var_28 = &sealengine::CEmitterPos::`vftable'
    int64_t var_24_1 = xmm0_1
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0
    int32_t var_14_1 = 0
    int32_t var_4_2 = 1
    var_4c.d = 0
    int32_t var_48_1 = 1
    struct sealengine::CEmitterPos::VTable* const var_44_1 = &sealengine::CEmitterPos::`vftable'
    int64_t var_40_1 = xmm0_1
    int32_t var_38_1 = 0
    int32_t var_34_1 = 0
    int32_t var_30_1 = 0
    int32_t var_2c_1 = 0xffffffff
    var_4_2.b = 2
    int32_t var_4_3 = 0xffffffff
    
    if (sub_562c70(esi_1, &var_4c) != 0)
        goto label_562bd9
    
    result = false
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
