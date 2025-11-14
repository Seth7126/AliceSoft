// 函数: sub_5b4090
// 地址: 0x5b4090
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c8e28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = *(arg1 + 0x38)
int32_t eax_5
uint32_t edx_2
eax_5, edx_2 = __allmul(edx - *(arg1 + 0x28), 
    sbb.d(*(arg1 + 0x3c), *(arg1 + 0x2c), edx u< *(arg1 + 0x28)), 0x3e8, 0)
uint32_t eax_6
uint32_t edx_3
eax_6, edx_3 = __alldiv(eax_5, edx_2, data_75d560, data_75d564)
sub_455870(0x6e5e14)
uint32_t var_48_1 = eax_6
sub_455870(0x6e5e24)
void* var_24
sub_5b42e0(&var_24, arg1 + 8)
int32_t var_c_1 = 0
void* var_20

for (void** i = *(arg1 + 0x14); i != *(arg1 + 0x18); i = &i[3])
    char var_28
    int32_t var_48_3 = var_28.d
    sub_5b4940(&var_24, var_20, *i, i[1])

void* ebx_2 = var_24
int32_t eax_10 = (var_20 - ebx_2) s/ 0x38
int32_t result
int32_t ecx_6
result, ecx_6 = sub_5b4b30(eax_10, var_20, ebx_2, eax_10, 0.d)

if (ebx_2 != var_20)
    void* esi = ebx_2 + 0x20
    
    do
        int32_t ebx_3 = *esi
        
        if (ebx_3 != 0)
            uint32_t edi_1 = data_75d564
            char var_28_1
            
            if (ebx_3 s<= 0)
                var_28_1.d = 0
            else
                int32_t eax_11
                uint32_t edx_8
                eax_11, edx_8 = __allmul(*(esi + 0x10), *(esi + 0x14), 0x3e8, 0)
                uint32_t eax_12
                int32_t edx_9
                eax_12, edx_9 = __alldiv(eax_11, edx_8, data_75d560, edi_1)
                int32_t eax_13
                uint32_t edx_10
                eax_13, edx_10 = __allmul(eax_12, edx_9, 0x3e8, 0)
                int32_t eax_15
                uint32_t edx_11
                edx_11:eax_15 = sx.q(ebx_3)
                uint32_t eax_16 = __alldiv(eax_13, edx_10, eax_15, edx_11)
                edi_1 = data_75d564
                var_28_1.d = eax_16
            
            uint32_t ecx_9
            int32_t ebx_4
            
            if (edx_3 s< 0 || (edx_3 s<= 0 && eax_6 u<= 0))
                ebx_4 = data_75d560
                ecx_9 = 0
            else
                int32_t eax_17
                uint32_t edx_12
                eax_17, edx_12 = __allmul(*(esi + 0x10), *(esi + 0x14), 0x3e8, 0)
                ebx_4 = data_75d560
                uint32_t eax_18
                int32_t edx_13
                eax_18, edx_13 = __alldiv(eax_17, edx_12, ebx_4, edi_1)
                int32_t eax_19
                uint32_t edx_14
                eax_19, edx_14 = __allmul(eax_18, edx_13, 0x64, 0)
                ecx_9 = __alldiv(eax_19, edx_14, eax_6, edx_3)
            
            void* eax_21
            
            if (*(esi - 4) u< 0x10)
                eax_21 = esi - 0x18
            else
                eax_21 = *(esi - 0x18)
            
            void* var_48_9 = eax_21
            int32_t var_4c_7 = var_28_1.d
            uint32_t var_50_11 = ecx_9
            int32_t eax_22
            uint32_t edx_15
            eax_22, edx_15 = __allmul(*(esi + 0x10), *(esi + 0x14), 0x3e8, 0)
            uint32_t var_54_12 = __alldiv(eax_22, edx_15, ebx_4, edi_1)
            sub_455870("%12d ms | %3d%% | %12d ")
        
        esi += 0x38
        result = esi - 0x20
    while (result != var_20)
    
    ebx_2 = var_24

int32_t var_c_2 = 0xffffffff

if (ebx_2 != 0)
    void* esi_1 = ebx_2
    
    if (ebx_2 != var_20)
        do
            (**esi_1)(0)
            esi_1 += 0x38
        while (esi_1 != var_20)
    
    result = j__free(ebx_2)

fsbase->NtTib.ExceptionList = ExceptionList
var_4
return result
