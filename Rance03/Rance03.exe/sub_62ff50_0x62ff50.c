// 函数: sub_62ff50
// 地址: 0x62ff50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint8_t var_11c
int32_t* eax_1 = __security_cookie ^ &var_11c
int32_t* var_4 = eax_1
int32_t edi = arg2
int32_t ecx = *(arg1 + 0x80)

if (ecx != 0)
    int32_t i = 4
    var_11c = (ecx u>> 0x18).b
    uint8_t var_11b_1 = (ecx u>> 0x10).b
    uint8_t var_11a_1 = (ecx u>> 8).b
    uint8_t var_119_1 = *(arg1 + 0x80)
    
    if ((*" using zstream")[0] != 0)
        while (i u< 0x3f)
            (&var_11c)[i] = (*"k")[i]
            i += 1
            
            if ((*"k")[i] == 0)
                break
    
    (&var_11c)[i] = 0
    char var_dc[0xd8]
    sub_62a640(&var_11c, &var_dc, arg1, &var_11c)
    eax_1, arg2 = sub_62a550(arg1, &var_dc)
    *(arg1 + 0x80) = 0

bool cond:0 = (*(arg1 + 0x78) & 2) == 0
*(arg1 + 0x84) = 0
*(arg1 + 0x88) = 0
*(arg1 + 0x90) = 0
*(arg1 + 0x94) = 0
void* result

if (cond:0)
    void* var_128_2 = arg1 + 0x84
    result = sub_6239b0(eax_1, arg2, arg1 + 0x84, "1.2.7")
    
    if (result != 0)
        sub_627c20(arg1, result)
    else
        *(arg1 + 0x78) |= 2
        *(arg1 + 0x80) = edi
else
    void* eax_7
    
    if (arg1 != 0xffffff7c)
        eax_7 = *(arg1 + 0xa0)
    
    if (arg1 == 0xffffff7c || eax_7 == 0)
        result = 0xfffffffe
        sub_627c20(arg1, result)
    else
        *(eax_7 + 0x28) = 0
        *(eax_7 + 0x2c) = 0
        *(eax_7 + 0x30) = 0
        result = sub_623870(arg1 + 0x84)
        
        if (result == 0)
            *(arg1 + 0x80) = edi
        else
            sub_627c20(arg1, result)

sub_69a5bc(var_4 ^ &var_11c)
return result
