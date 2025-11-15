// 函数: sub_430740
// 地址: 0x430740
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_88 = 0xffffffff
int32_t (* var_8c)(void* arg1) = sub_72a374
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_84
int32_t eax_2 = __security_cookie ^ &var_84
int32_t var_148 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint8_t* var_10c
sub_431b80(&var_10c, 8)
int32_t var_88_1 = 0
uint8_t* lpBuffer = var_10c
int32_t var_108
void* nNumberOfBytesToRead = var_108 - lpBuffer
HANDLE hFile = *(arg2 + 8)
int32_t numberOfBytesRead

if (hFile == 0xffffffff || *(arg2 + 0xc) + nNumberOfBytesToRead u> *(arg2 + 0x10))
    lpBuffer.b = 0
else if (ReadFile(hFile, lpBuffer, nNumberOfBytesToRead, &numberOfBytesRead, nullptr) == 0
        || nNumberOfBytesToRead != numberOfBytesRead)
    lpBuffer.b = 0
else
    *(arg2 + 0xc) += nNumberOfBytesToRead
    struct fileimage::CFileImageAnalyser::VTable* const var_100 =
        &fileimage::CFileImageAnalyser::`vftable'
    uint8_t* lpBuffer_3 = lpBuffer
    void* var_f8_1 = lpBuffer + nNumberOfBytesToRead
    int32_t var_c_1 = 0xf
    int32_t var_10_1 = 0
    char var_20 = 0
    var_88_1.b = 2
    
    if (sub_6c9360(&var_100, &var_20, 4) == 0)
        lpBuffer.b = 0
    else if (sub_407560(&var_20, "AFAH") == 0)
        lpBuffer.b = 0
    else
        uint32_t var_94 = 0
        
        if (sub_61ec90(&var_100, &var_94) == 0)
            lpBuffer.b = 0
        else
            uint32_t esi_1 = var_94
            
            if (esi_1 == 0)
                lpBuffer.b = 0
            else
                uint8_t* lpBuffer_2
                sub_431b80(&lpBuffer_2, esi_1)
                var_88_1.b = 3
                lpBuffer = lpBuffer_2
                
                if (sub_5f2320(arg2, lpBuffer, esi_1) == 0)
                    lpBuffer.b = 0
                    sub_4059a0(&lpBuffer_2)
                else
                    struct fileimage::CFileImageBitAnalyser::VTable* const var_d0 =
                        &fileimage::CFileImageBitAnalyser::`vftable'
                    uint8_t* lpBuffer_4 = lpBuffer
                    int32_t var_120
                    int32_t var_c8_1 = var_120
                    int32_t var_c4_1 = 0
                    var_88_1.b = 4
                    var_94 = 0
                    
                    if (sub_6c9790(&var_d0, &var_94) == 0 || var_94 != 3)
                        lpBuffer.b = 0
                        sub_4059a0(&lpBuffer_2)
                    else if (sub_6c9730(&var_d0, arg1 + 8) == 0)
                        lpBuffer.b = 0
                        sub_4059a0(&lpBuffer_2)
                    else
                        struct afafactory::CCharMap::VTable* var_f4 =
                            &afafactory::CCharMap::`vftable'
                        int32_t var_f0_1 = 0
                        int32_t var_ec_1 = 0
                        int32_t var_e8_1 = 0
                        var_88_1.b = 5
                        
                        if (sub_426230(&var_f4, &var_d0) == 0)
                        label_430c62:
                            lpBuffer.b = 0
                            sub_4329c0(&var_f4)
                            sub_4059a0(&lpBuffer_2)
                        else
                            void* lpBuffer_5 = nullptr
                            var_94 = 0
                            
                            if (sub_6c9790(&var_d0, &lpBuffer_5) == 0)
                                goto label_430c62
                            
                            if (sub_6c9790(&var_d0, &var_94) == 0)
                                goto label_430c62
                            
                            void* lpBuffer_6 = lpBuffer_5
                            uint8_t* lpBuffer_1
                            sub_431b80(&lpBuffer_1, lpBuffer_6)
                            var_88_1.b = 6
                            lpBuffer = lpBuffer_1
                            
                            if (sub_6c9ae0(&var_d0, lpBuffer, lpBuffer_6) != 0)
                                int32_t var_118
                                sub_431b80(&var_118, var_94)
                                struct commonsystemdata::CZlibDecompressor::VTable* var_c0 =
                                    &commonsystemdata::CZlibDecompressor::`vftable'
                                int32_t* var_bc_1 = nullptr
                                var_88_1.b = 8
                                
                                if (sub_454990(&var_c0) == 0 || var_bc_1 == 0)
                                labelid_17:
                                    lpBuffer.b = 0
                                else
                                    int32_t edi_1 = var_118
                                    
                                    if ((*(*var_bc_1 + 8))(edi_1, var_94, lpBuffer, lpBuffer_6)
                                        == 0)
                                    label_430c2a:
                                        lpBuffer.b = 0
                                    else
                                        struct fileimage::CFileImageBitAnalyser::VTable* const 
                                            var_b8 = &fileimage::CFileImageBitAnalyser::`vftable'
                                        int32_t var_b4_1 = edi_1
                                        int32_t var_114
                                        int32_t var_b0_1 = var_114
                                        int32_t var_ac_1 = 0
                                        int32_t* ecx_19 = &var_b8
                                        var_88_1.b = 9
                                        
                                        if (sub_6c95a0(ecx_19, 1) == 0)
                                        label_430c2a_1:
                                            lpBuffer.b = 0
                                        else
                                            lpBuffer_5 = nullptr
                                            
                                            if (sub_6c9790(ecx_19, &lpBuffer_5) == 0)
                                            label_430c2a_2:
                                                lpBuffer.b = 0
                                            else
                                                lpBuffer = lpBuffer_5
                                                int32_t esi_2 = esi_1 + 8
                                                int32_t edi_2 = 0
                                                int32_t var_e4_1 = esi_2
                                                
                                                if (lpBuffer s> 0)
                                                    while (true)
                                                        struct 
                                                            fileimage::CFileImageBitAnalyser::VTable
                                                            * const* ecx_20 = &var_b8
                                                        
                                                        if (sub_6c95a0(ecx_20, 2) == 0)
                                                            goto label_430c2a_2
                                                        
                                                        void* var_dc = nullptr
                                                        int32_t var_d8_1 = 0
                                                        int32_t var_d4_1 = 0
                                                        var_88_1.b = 0xa
                                                        
                                                        if (sub_4260b0(ecx_20, &var_dc) != 0)
                                                            lpBuffer_5 = nullptr
                                                            var_94 = 0
                                                            
                                                            if (
                                                                    sub_6c9820(&var_b8, &lpBuffer_5) != 0
                                                                    && sub_6c9820(&var_b8, &var_94) != 0)
                                                                int32_t var_a0 = 0
                                                                
                                                                if (sub_6c9820(&var_b8, &var_a0) != 0)
                                                                    numberOfBytesRead = 0
                                                                    
                                                                    if (
                                                                            sub_6c9820(&var_b8, &numberOfBytesRead)
                                                                            != 0)
                                                                        int32_t* eax_38 = sub_6e810c(0x28)
                                                                        int32_t* var_a8 = eax_38
                                                                        *eax_38 = 0
                                                                        eax_38[1] = 0
                                                                        eax_38[2] = 0
                                                                        eax_38[3] = 0
                                                                        eax_38[9] = 0xf
                                                                        eax_38[8] = 0
                                                                        char* eax_39
                                                                        
                                                                        if (eax_38[9] u< 0x10)
                                                                            eax_39 = &eax_38[4]
                                                                        else
                                                                            eax_39 = eax_38[4]
                                                                        
                                                                        *eax_39 = 0
                                                                        eax_38[2] = lpBuffer_5
                                                                        eax_38[3] = var_94
                                                                        int32_t eax_43 = var_a0 + esi_2
                                                                        var_a8 = eax_38
                                                                        *eax_38 = eax_43
                                                                        eax_38[1] = numberOfBytesRead
                                                                        
                                                                        if (&eax_38[4] != arg3)
                                                                            sub_403590(&eax_38[4], arg3, 0, 
                                                                                0xffffffff)
                                                                        
                                                                        void** var_14c_18 = &var_dc
                                                                        sub_425e70(&var_f4, &var_84)
                                                                        var_88_1.b = 0xb
                                                                        var_88_1.b = 0xc
                                                                        void var_6c
                                                                        void var_38
                                                                        sub_430d00(&var_38, sub_430ec0(&var_6c))
                                                                        sub_403320(&var_6c)
                                                                        var_88_1.b = 0xf
                                                                        sub_403320(&var_84)
                                                                        var_88_1.b = 0x10
                                                                        void* var_54
                                                                        int32_t* eax_50
                                                                        void* ecx_34
                                                                        eax_50, ecx_34 = sub_432530(sub_4322f0(
                                                                            &var_a8, &var_38, &var_54, &var_a8))
                                                                        int32_t* var_14c_21 = eax_50
                                                                        void* var_150_7 = &eax_50[4]
                                                                        void** var_138
                                                                        sub_432580(arg1 + 0xc, &var_138, ecx_34)
                                                                        int32_t var_40
                                                                        
                                                                        if (var_40 u>= 0x10)
                                                                            sub_403160(var_54, var_40 + 1, 1)
                                                                        
                                                                        sub_403320(&var_38)
                                                                        var_88_1.b = 9
                                                                        sub_4043e0(&var_dc)
                                                                        esi_2 = var_e4_1
                                                                        edi_2 += 1
                                                                        
                                                                        if (edi_2 s>= lpBuffer)
                                                                            break
                                                                        
                                                                        continue
                                                        
                                                        sub_4043e0(&var_dc)
                                                        goto label_430c2a_2
                                                
                                                lpBuffer.b = 1
                                
                                std::basic_filebuf<char,struct std::char_traits<char> >::~basic_filebuf<char,struct std::char_traits<char> >(
                                    &var_c0)
                                sub_4059a0(&var_118)
                                sub_4059a0(&lpBuffer_1)
                                sub_4329c0(&var_f4)
                                sub_4059a0(&lpBuffer_2)
                            else
                                lpBuffer.b = 0
                                sub_4059a0(&lpBuffer_1)
                                sub_4329c0(&var_f4)
                                sub_4059a0(&lpBuffer_2)
    
    if (var_c_1 u>= 0x10)
        sub_403160(var_20.d, var_c_1 + 1, 1)
    
    int32_t var_c_2 = 0xf
    int32_t var_10_2 = 0
    var_20 = 0
uint8_t* result = var_10c
int32_t var_104

if (result != 0)
    sub_403160(result, var_104 - result, 1)
result.b = lpBuffer.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_84)
return result
