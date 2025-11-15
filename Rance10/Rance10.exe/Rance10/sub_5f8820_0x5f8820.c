// 函数: sub_5f8820
// 地址: 0x5f8820
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_844
int32_t eax_1 = __security_cookie ^ &var_844
int32_t* esi = arg1
var_844 = esi
void* result = (*(*esi + 8))()
void* result_1 = result

if (result_1 s> 1)
    int32_t var_83c = 0xffffffff
    uint32_t var_838[0x82][0x4]
    _memset(&var_838, 0, 0x824)
    int32_t var_14_1 = 0
    int32_t var_10_1 = 0
    uint32_t var_858_1
    
    if (arg2 s>= 0)
        var_858_1 = arg2
    else
        var_858_1 = sub_406a00()
    
    result = sub_4a7790(&var_83c, var_858_1)
    int32_t ebp_1 = 1
    
    if (result_1 s> 1)
        int32_t ebx = var_83c
        
        do
            ebx += 1
            var_83c = ebx
            
            if (ebx s>= 0x209)
                sub_4a7690(&var_83c)
                ebx = 0
                var_83c = 0
            
            result = (*(*esi + 0x54))(ebp_1, modu.dp.d(0:(var_838[0][ebx]), ebp_1 + 1))
            esi = var_844
            ebp_1 += 1
        while (ebp_1 s< result_1)

@__security_check_cookie@4(eax_1 ^ &var_844)
return result
