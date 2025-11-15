// 函数: sub_71ae54
// 地址: 0x71ae54
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
void* var_8 = __security_cookie ^ &__saved_ebp
char* i = arg2
int32_t edi
int32_t var_160 = edi

for (; i != arg1; i = boost::math::tools::evaluate_polynomial<5,long double,long double>(arg1, i))
    void* eax_1
    eax_1.b = *i
    
    if (eax_1.b == 0x2f)
        break
    
    if (eax_1.b == 0x5c)
        break
    
    if (eax_1.b == 0x3a)
        break

char edx = *i
int32_t result

if (edx != 0x3a || i == &arg1[1])
    int32_t result_1 = 0
    char eax_3
    
    if (edx == 0x2f || edx == 0x5c || edx == 0x3a)
        eax_3 = 1
    else
        eax_3 = 0
    
    uint32_t eax_4 = zx.d(eax_3)
    int32_t eax_5 = neg.d(eax_4)
    void findFileData
    _memset(&findFileData, 0, 0x140)
    HANDLE hFindFile =
        FindFirstFileExA(arg1, FindExInfoStandard, &findFileData, FindExSearchNameMatch, nullptr, 0)
    int32_t* eax_8 = arg3
    int32_t result_2
    
    if (hFindFile != 0xffffffff)
        int32_t var_154_1 = (eax_8[1] - *eax_8) s>> 2
        BOOL i_1
        
        do
            char var_11c
            int32_t ecx_6
            
            if (var_11c != 0x2e)
            label_71af81:
                result_2 = sub_71adbe(&var_11c, arg1, 
                    sbb.d(eax_5, eax_5, eax_4 != 0) & (i - arg1 + 1), eax_8)
                
                if (result_2 != 0)
                    goto label_71af22
            else
                char var_11b
                ecx_6.b = var_11b
                char var_11a
                
                if (ecx_6.b != 0 && (ecx_6.b != 0x2e || var_11a != 0))
                    goto label_71af81
            
            i_1, ecx_6 = FindNextFileA(hFindFile, &findFileData)
            eax_8 = arg3
        while (i_1 != 0)
        int32_t edx_1 = *eax_8
        int32_t eax_11 = (eax_8[1] - edx_1) s>> 2
        
        if (var_154_1 != eax_11)
            _qsort(edx_1 + (var_154_1 << 2), eax_11 - var_154_1, 4, 
                <lambda_0dd5bdc19d053301b5cd8d3a41e3b3be>::<helper_func_cdecl>)
    else
        result_2 = sub_71adbe(arg1, 0, nullptr, eax_8)
    label_71af22:
        result_1 = result_2
    
    if (hFindFile != 0xffffffff)
        FindClose(hFindFile)
    
    result = result_1
else
    result = sub_71adbe(arg1, 0, nullptr, arg3)

@__security_check_cookie@4(var_8 ^ &__saved_ebp)
return result
