// 函数: sub_5c5100
// 地址: 0x5c5100
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c9bc0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_48 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** ebp = arg1
void** var_2c = arg1
int32_t eax_3 = data_75de60

if ((eax_3.b & 1) == 0)
    data_75de60 = eax_3 | 1
    int32_t var_4 = 0
    data_75dd84 = 0xf
    data_75dd80 = 0
    data_75dd70 = 0
    sub_402110(&data_75dd70, &data_6e6f10, 2)
    var_4.b = 1
    data_75dd9c = 0xf
    data_75dd98 = 0
    data_75dd88 = 0
    sub_402110(&data_75dd88, &data_6e6f0c, 2)
    var_4.b = 2
    data_75ddb4 = 0xf
    data_75ddb0 = 0
    data_75dda0 = 0
    sub_402110(&data_75dda0, &data_6e6f18, 2)
    var_4.b = 3
    data_75ddcc = 0xf
    data_75ddc8 = 0
    data_75ddb8 = 0
    sub_402110(&data_75ddb8, &data_6e6f14, 2)
    var_4.b = 4
    data_75dde4 = 0xf
    data_75dde0 = 0
    data_75ddd0 = 0
    sub_402110(&data_75ddd0, &data_6e6f20, 2)
    var_4.b = 5
    data_75ddfc = 0xf
    data_75ddf8 = 0
    data_75dde8 = 0
    sub_402110(&data_75dde8, &data_6e6f1c, 2)
    var_4.b = 6
    data_75de14 = 0xf
    data_75de10 = 0
    data_75de00 = 0
    sub_402110(&data_75de00, &data_6e6f28, 2)
    var_4.b = 7
    data_75de2c = 0xf
    data_75de28 = 0
    data_75de18 = 0
    sub_402110(&data_75de18, &data_6e6f24, 2)
    var_4.b = 8
    data_75de44 = 0xf
    data_75de40 = 0
    data_75de30 = 0
    sub_402110(&data_75de30, &data_6e6f30, 2)
    var_4.b = 9
    data_75de5c = 0xf
    data_75de58 = 0
    data_75de48 = 0
    sub_402110(&data_75de48, &data_6e6f2c, 2)
    _atexit(sub_6d2e70)

char* ebx = nullptr
char* esi_2 = nullptr
int32_t edi = 0
char* var_18 = nullptr
char* var_14 = nullptr
int32_t var_10 = 0
int32_t* ecx = &ebp[4]
int32_t var_4_1 = 0xa
uint32_t eax_14 = *ecx

if (eax_14 != 0)
    if (eax_14 u> 0xffffffff)
    label_5c53ec:
        sub_69a551("vector<T> too long")
        noreturn
    
    sub_403640(&var_18, eax_14)
    edi = var_10
    esi_2 = var_14
    ebx = var_18

if (ebp[5] u>= 0x10)
    ebp = *ebp
    var_2c = ebp

void* eax_15 = *ecx
void* edx = nullptr
void* var_20_1 = eax_15
void* var_30_1 = nullptr

if (eax_15 s> 0)
    do
        eax_15.b = *(edx + ebp)
        void* ecx_2 = edx + ebp
        void* var_24_1 = ecx_2
        
        if ((eax_15.b u>= 0x81 && eax_15.b u<= 0x9f) || (eax_15.b u>= 0xe0 && eax_15.b u<= 0xef))
            void* var_28_1 = nullptr
            
            for (char* i = &data_75dd70; i s< &data_75de60; )
                char* i_2
                
                if (*(i + 0x14) u< 0x10)
                    i_2 = i
                else
                    i_2 = *i
                
                if (_strncmp(ecx_2, i_2, 2) == 0)
                    void* ecx_3 = var_28_1
                    eax_15 = ecx_3 + 0x30
                    char var_31_1 = eax_15.b
                    char var_33 = eax_15.b
                    
                    if (&var_33 u>= esi_2 || ebx u> &var_33)
                        if (esi_2 == edi)
                            sub_403590(&var_18, 1)
                            edi = var_10
                            esi_2 = var_14
                            ebx = var_18
                            ecx_3 = var_28_1
                            eax_15.b = var_31_1
                        
                        if (esi_2 != 0)
                            *esi_2 = eax_15.b
                    else
                        int32_t ebp_1 = &var_33 - ebx
                        
                        if (esi_2 == edi)
                            sub_403590(&var_18, 1)
                            edi = var_10
                            esi_2 = var_14
                            ebx = var_18
                            ecx_3 = var_28_1
                        
                        if (esi_2 != 0)
                            eax_15.b = ebx[ebp_1]
                            *esi_2 = eax_15.b
                    
                    esi_2 = &esi_2[1]
                    edx = var_30_1 + 2
                    var_14 = esi_2
                    var_30_1 = edx
                    
                    if (ecx_3 s< 0xa)
                        goto label_5c56c8
                    
                    goto label_5c5522
                
                var_28_1 += 1
                i = &i[0x18]
                ecx_2 = var_24_1
            
            edx = var_30_1
        label_5c5522:
            void** ecx_9 = var_2c
            char* ebp_2 = edx + ecx_9
            
            if (ebp_2 u>= esi_2 || ebx u> ebp_2)
                if (esi_2 == edi && edi - esi_2 u< 1)
                    if (ebx - esi_2 - 1 u< 1)
                        goto label_5c53ec
                    
                    void* edi_3 = edi - ebx
                    uint32_t ecx_11 = edi_3 u>> 1
                    uint32_t edi_4
                    
                    if (0xffffffff - ecx_11 u>= edi_3)
                        edi_4 = edi_3 + ecx_11
                    else
                        edi_4 = 0
                    
                    if (edi_4 u< esi_2 - ebx + 1)
                        edi_4 = esi_2 - ebx + 1
                    
                    sub_403640(&var_18, edi_4)
                    edi = var_10
                    esi_2 = var_14
                    ebx = var_18
                    edx = var_30_1
                    ecx_9 = var_2c
                
                if (esi_2 != 0)
                    eax_15.b = *ebp_2
                    *esi_2 = eax_15.b
            else
                void* ebp_3 = ebp_2 - ebx
                
                if (esi_2 == edi && edi - esi_2 u< 1)
                    if (ebx - esi_2 - 1 u< 1)
                        goto label_5c53ec
                    
                    void* edi_1 = edi - ebx
                    uint32_t ecx_7 = edi_1 u>> 1
                    void* edi_2
                    
                    if (0xffffffff - ecx_7 u>= edi_1)
                        edi_2 = edi_1 + ecx_7
                    else
                        edi_2 = nullptr
                    
                    if (edi_2 u< esi_2 - ebx + 1)
                        edi_2 = esi_2 - ebx + 1
                    
                    sub_403640(&var_18, edi_2)
                    edi = var_10
                    esi_2 = var_14
                    ebx = var_18
                    edx = var_30_1
                    ecx_9 = var_2c
                
                if (esi_2 != 0)
                    eax_15.b = *(ebx + ebp_3)
                    *esi_2 = eax_15.b
            
            void* edx_2 = edx + 1
            char* esi_7 = &esi_2[1]
            void* ebp_4 = edx_2 + ecx_9
            
            if (ebp_4 u>= esi_7 || ebx u> ebp_4)
                if (esi_7 == edi && edi - esi_7 u< 1)
                    if (ebx - esi_7 - 1 u< 1)
                        goto label_5c53ec
                    
                    void* edi_7 = edi - ebx
                    uint32_t ecx_17 = edi_7 u>> 1
                    uint32_t edi_8
                    
                    if (0xffffffff - ecx_17 u>= edi_7)
                        edi_8 = edi_7 + ecx_17
                    else
                        edi_8 = 0
                    
                    if (edi_8 u< esi_7 - ebx + 1)
                        edi_8 = esi_7 - ebx + 1
                    
                    sub_403640(&var_18, edi_8)
                    edi = var_10
                    ebx = var_18
                
                if (esi_7 != 0)
                    eax_15.b = *ebp_4
                    *esi_7 = eax_15.b
            else
                int32_t ebp_5 = ebp_4 - ebx
                
                if (esi_7 == edi && edi - esi_7 u< 1)
                    if (ebx - esi_7 - 1 u< 1)
                        goto label_5c53ec
                    
                    void* edi_5 = edi - ebx
                    uint32_t ecx_14 = edi_5 u>> 1
                    void* edi_6
                    
                    if (0xffffffff - ecx_14 u>= edi_5)
                        edi_6 = edi_5 + ecx_14
                    else
                        edi_6 = nullptr
                    
                    if (edi_6 u< esi_7 - ebx + 1)
                        edi_6 = esi_7 - ebx + 1
                    
                    sub_403640(&var_18, edi_6)
                    edi = var_10
                    ebx = var_18
                
                if (esi_7 != 0)
                    eax_15.b = ebx[ebp_5]
                    *esi_7 = eax_15.b
            
            esi_2 = &esi_7[1]
            edx = edx_2 + 1
            var_14 = esi_2
            var_30_1 = edx
        label_5c56c8:
            ebp = var_2c
        else if (ecx_2 u>= esi_2 || ebx u> ecx_2)
            if (esi_2 == edi)
                sub_403590(&var_18, 1)
                edi = var_10
                esi_2 = var_14
                ebx = var_18
                ecx_2 = var_24_1
                edx = var_30_1
            
            if (esi_2 == 0)
                goto label_5c5790
            
            eax_15.b = *ecx_2
            *esi_2 = eax_15.b
        label_5c5790:
            esi_2 = &esi_2[1]
            edx += 1
            var_14 = esi_2
            var_30_1 = edx
        else
            char* ecx_20 = ecx_2 - ebx
            
            if (esi_2 == edi)
                sub_403590(&var_18, 1)
                edi = var_10
                esi_2 = var_14
                ebx = var_18
                edx = var_30_1
            
            if (esi_2 == 0)
                goto label_5c5790
            
            eax_15.b = *(ecx_20 + ebx)
            *esi_2 = eax_15.b
            esi_2 = &esi_2[1]
            edx += 1
            var_14 = esi_2
            var_30_1 = edx
    while (edx s< var_20_1)

char var_32 = 0

if (&var_32 u>= esi_2 || ebx u> &var_32)
    if (esi_2 == edi)
        sub_403590(&var_18, 1)
        esi_2 = var_14
        ebx = var_18
    
    if (esi_2 != 0)
        *esi_2 = 0
else
    int32_t ebp_6 = &var_32 - ebx
    
    if (esi_2 == edi)
        sub_403590(&var_18, 1)
        esi_2 = var_14
        ebx = var_18
    
    if (esi_2 != 0)
        *esi_2 = ebx[ebp_6]

void* var_14_2 = &esi_2[1]
void* ecx_24

if (*ebx != 0)
    char* ecx_25 = ebx
    char i_1
    
    do
        i_1 = *ecx_25
        ecx_25 = &ecx_25[1]
    while (i_1 != 0)
    ecx_24 = ecx_25 - &ecx_25[1]
else
    ecx_24 = nullptr

sub_402110(arg2, ebx, ecx_24)
int32_t result = j__free(ebx)
fsbase->NtTib.ExceptionList = ExceptionList
return result
