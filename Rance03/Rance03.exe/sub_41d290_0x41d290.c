// 函数: sub_41d290
// 地址: 0x41d290
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t lParam
int32_t eax_1 = __security_cookie ^ &lParam
int32_t esi = data_75d4a4

if (esi s>= 0)
    int32_t ecx = data_75d5d0
    
    if (esi s< (data_75d5d4 - ecx) s>> 2)
        int32_t eax_5
        eax_5.b = *(ecx + (esi << 2)) == 0
        *(ecx + (esi << 2)) = eax_5

BOOL result = sub_41d430(arg1, sub_420a40(&lParam, esi))
BOOL result_1 = result
int32_t var_1c

if (var_1c u>= 0x10)
    result = j__free(lParam)

if (result_1 != 0)
    if (esi s< 0)
        int32_t var_28_2 = 4
    else
        int32_t ecx_3 = data_75d5d0
        
        if (esi s>= (data_75d5d4 - ecx_3) s>> 2)
            var_28_2 = 4
        else
            int32_t var_28_1 = 0
            int32_t eax_9
            eax_9.b = *(ecx_3 + (esi << 2)) != 0
            
            if (eax_9.b == 0)
                var_28_2 = 4
    
    lParam = 8
    BOOL result_2 = result_1
    int32_t var_24_1 = 4
    SendMessageA(*(arg1 + 0x10), 0x110d, 0, &lParam)
    InvalidateRect(*(*(arg1 + 0xc4) + 0xc), nullptr, 1)
    result = UpdateWindow(*(*(arg1 + 0xc4) + 0xc))

sub_69a5bc(eax_1 ^ &lParam)
return result
