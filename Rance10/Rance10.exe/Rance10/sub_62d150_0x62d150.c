// 函数: sub_62d150
// 地址: 0x62d150
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = arg1[6]
*arg1 = &std::_Node_if::`vftable'{for `std::_Node_base'}

while (i != 0)
    int32_t* eax = &i[6]
    int32_t* j = i
    i = *eax
    *eax = 0
    int32_t ebx_1 = arg1[5]
    
    if (j != ebx_1)
        while (j != 0)
            int32_t* j_1 = j
            void** eax_1 = &j[3]
            j = *eax_1
            *eax_1 = nullptr
            (**j_1)(1)
            
            if (j == ebx_1)
                break

*arg1 = &std::_Node_base::`vftable'
