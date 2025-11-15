// 函数: sub_637ef0
// 地址: 0x637ef0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
struct std::_Node_base::std::_Node_if::VTable** ebx = nullptr
struct std::_Node_base::std::_Node_endif::VTable** edi = 0xffffffff
void* result = arg1[0x13]

if (result != 0x2a)
    if (result == 0x2b)
        ebx = 1
    else if (result != 0x3f)
        if (result != 0x7b)
            return result
        
        sub_636ac0(arg1)
        
        if (sub_638390(arg1) == 0)
            sub_6d0967(7)
            noreturn
        
        ebx = arg1[0x11]
        
        if (arg1[0x13] == 0x2c)
            sub_636ac0(arg1)
            
            if (arg1[0x13] != 0x7d)
                if (sub_638390(arg1) == 0)
                    sub_6d0967(7)
                    noreturn
                
                edi = arg1[0x11]
                goto label_637fda
        else
            edi = ebx
        label_637fda:
            
            if (arg1[0x13] != 0x7d)
                sub_6d0967(7)
                noreturn
        
        if (edi != 0xffffffff && edi s< ebx)
            sub_6d0967(7)
            noreturn
    else
        edi = result - 0x3e

void* eax = arg1[0xa]
*(eax + 8) |= 4
int16_t* ebp_1 = *arg1

if (ebp_1 != arg1[2])
    if (*ebp_1 == 0x5c && sub_636a80(arg1) != 0)
        *arg1 = &ebp_1[1]
    
    *arg1 += 2

sub_635790(arg1)

if ((arg1[0x14] & 0x400) == 0 || arg1[0x13] != 0x3f)
    return sub_638a00(&arg1[9], ebx, edi, 1)

int16_t* ebp_2 = *arg1

if (ebp_2 != arg1[2])
    if (*ebp_2 == 0x5c && sub_636a80(arg1) != 0)
        *arg1 = &ebp_2[1]
    
    *arg1 += 2

sub_635790(arg1)
return sub_638a00(&arg1[9], ebx, edi, 0)
