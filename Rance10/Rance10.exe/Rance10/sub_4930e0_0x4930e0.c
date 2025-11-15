// 函数: sub_4930e0
// 地址: 0x4930e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72fb58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* result_1
sub_431b80(&result_1, (*(*arg1 + 8))(eax_2) << 2)
int32_t var_8_1 = 0
void* result_2 = result_1
int32_t var_7c
void* esi_1 = var_7c - result_2
sub_700660(result_2, (*(*arg1 + 0xc))(0), esi_1)
void* edx = result_2 + esi_1
struct fileimage::CFileImageAnalyser::VTable* const var_6c =
    &fileimage::CFileImageAnalyser::`vftable'
void* result_3 = result_2
void* var_64 = edx
void* ecx_2 = result_2 + 4
var_8_1.b = 1

if (ecx_2 u> edx)
labelid_11:
    result_2.b = 0
else
    int32_t esi_2 = 0
    uint32_t edi_7 =
        ((zx.d(*(result_2 + 3)) << 8 | zx.d(*(result_2 + 2))) << 8 | zx.d(*(result_2 + 1))) << 8
        | zx.d(*result_2)
    char var_2c
    int32_t var_18_1
    
    if (edi_7 s> 0)
        while (true)
            var_18_1 = 0xf
            int32_t var_1c_1 = 0
            var_2c = 0
            sub_403490(&var_2c, 0x75ceaf, nullptr)
            var_8_1.b = 2
            
            if (sub_61ed80(&var_6c, &var_2c) == 0)
                break
            
            char* lpFileName = &var_2c
            
            if (var_18_1 u>= 0x10)
                lpFileName = var_2c.d
            
            uint32_t eax_12 = GetFileAttributesA(lpFileName)
            
            if (eax_12 != 0xffffffff && (not.b((eax_12 u>> 4).b) & 1) != 0
                    && sub_492d10(&var_2c) == 0)
                break
            
            var_8_1.b = 1
            
            if (var_18_1 u>= 0x10)
                sub_403160(var_2c.d, var_18_1 + 1, 1)
            
            esi_2 += 1
            
            if (esi_2 s>= edi_7)
                edx = var_64
                goto label_493221
        
        goto label_4934c7
    
label_493221:
    void* esi_4 = ecx_2 + 4
    
    if (esi_4 u> edx)
    labelid_11:
        result_2.b = 0
    else
        int32_t edi_8 = 0
        result_2 = ((zx.d(*(ecx_2 + 3)) << 8 | zx.d(*(ecx_2 + 2))) << 8 | zx.d(*(ecx_2 + 1))) << 8
            | zx.d(*ecx_2)
        void* var_a4_8
        int32_t var_a0_7
        
        if (result_2 s<= 0)
        label_49331d:
            void* ecx_11 = esi_4 + 4
            
            if (ecx_11 u> edx)
            label_4934db:
                result_2.b = 0
            else
                uint32_t ebx_12 =
                    ((zx.d(*(esi_4 + 3)) << 8 | zx.d(*(esi_4 + 2))) << 8 | zx.d(*(esi_4 + 1))) << 8
                    | zx.d(*esi_4)
                result_2 = nullptr
                
                if (ebx_12 s> 0)
                    while (true)
                        if (ecx_11 + 4 u> edx)
                            goto label_4934db_2
                        
                        uint32_t esi_11 = ((zx.d(*(ecx_11 + 3)) << 8 | zx.d(*(ecx_11 + 2))) << 8
                            | zx.d(*(ecx_11 + 1))) << 8 | zx.d(*ecx_11)
                        int32_t var_30_1 = 0xf
                        int32_t var_34_1 = 0
                        char var_44 = 0
                        sub_403490(&var_44, 0x75ceae, nullptr)
                        var_8_1.b = 4
                        
                        if (sub_61ed80(&var_6c, &var_44) != 0)
                            char* var_20 = nullptr
                            int32_t var_1c_3 = 0
                            int32_t var_18_2 = 0
                            var_8_1.b = 5
                            char eax_36 = sub_67edf0(&var_44, &var_20)
                            char* edi_10 = var_20
                            
                            if (eax_36 != 0)
                                int32_t* eax_37 = sub_46d660(edi_10, var_1c_3 - edi_10)
                                
                                if (eax_37 != 0)
                                    sub_492a50(esi_11, eax_37)
                                    (*(*eax_37 + 4))()
                                    uint32_t var_60 = esi_11
                                    int32_t var_48_1 = 0xf
                                    int32_t var_4c_1 = 0
                                    char var_5c = 0
                                    int32_t ecx_19 = sub_403590(&var_5c, &var_44, 0, 0xffffffff)
                                    var_8_1.b = 6
                                    uint32_t var_9c_9 = ebx_12
                                    uint32_t* var_a0_3 = &var_60
                                    int32_t* var_88
                                    sub_494920(data_7fcb7c, &var_88, ecx_19)
                                    
                                    if (var_48_1 u>= 0x10)
                                        sub_403160(var_5c.d, var_48_1 + 1, 1)
                                    
                                    if (edi_10 != 0)
                                        sub_403160(edi_10, var_18_2 - edi_10, 1)
                                        var_20 = nullptr
                                        int32_t var_1c_4 = 0
                                        int32_t var_18_3 = 0
                                    
                                    var_8_1.b = 1
                                    
                                    if (var_30_1 u>= 0x10)
                                        sub_403160(var_44.d, var_30_1 + 1, 1)
                                    
                                    result_2 += 1
                                    
                                    if (result_2 s>= ebx_12)
                                        goto label_493539
                                    
                                    edx = var_64
                                    ecx_11 += 4
                                    continue
                            
                            if (edi_10 != 0)
                                sub_403160(edi_10, var_18_2 - edi_10, 1)
                        
                        if (var_30_1 u< 0x10)
                            goto label_4934db_2
                        
                        int32_t var_9c_11 = 1
                        var_a0_7 = var_30_1 + 1
                        var_a4_8 = var_44.d
                        break
                    
                    goto label_4934d3
                
            label_493539:
                result_2.b = 1
        else
            while (true)
                var_18_1 = 0xf
                int32_t var_1c_2 = 0
                var_2c = 0
                sub_403490(&var_2c, 0x75ceb7, nullptr)
                var_8_1.b = 3
                
                if (sub_61ed80(&var_6c, &var_2c) == 0)
                    break
                
                char* lpFileName_1 = &var_2c
                
                if (var_18_1 u>= 0x10)
                    lpFileName_1 = var_2c.d
                
                uint32_t eax_21 = GetFileAttributesA(lpFileName_1)
                
                if (eax_21 != 0xffffffff && (not.b((eax_21 u>> 4).b) & 1) != 0)
                    sub_424db0(data_7fcb74, &var_2c)
                    char* ecx_9 = &var_2c
                    
                    if (var_18_1 u>= 0x10)
                        ecx_9 = var_2c.d
                    
                    void* esi_3 = *data_7fcb70
                    struct common::SuicideRefCounter<class IEXReader>::exfile::CEXReader::VTable** 
                        eax_24 = sub_46d500(ecx_9)
                    data_7fcb70
                    
                    if ((*(esi_3 + 0x14))(eax_24) == 0)
                        break
                
                var_8_1.b = 1
                
                if (var_18_1 u>= 0x10)
                    sub_403160(var_2c.d, var_18_1 + 1, 1)
                
                edi_8 += 1
                
                if (edi_8 s>= result_2)
                    edx = var_64
                    goto label_49331d
            
        label_4934c7:
            
            if (var_18_1 u< 0x10)
            label_4934db_1:
                result_2.b = 0
            else
                int32_t var_9c_10 = 1
                var_a0_7 = var_18_1 + 1
                var_a4_8 = var_2c.d
            label_4934d3:
                sub_403160(var_a4_8, var_a0_7, 1)
            label_4934db_2:
                result_2.b = 0

void* result = result_1
int32_t var_78

if (result != 0)
    sub_403160(result, var_78 - result, 1)
result.b = result_2.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
