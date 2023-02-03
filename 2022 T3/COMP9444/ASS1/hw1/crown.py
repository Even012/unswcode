"""
   crown.py
   COMP9444, CSE, UNSW
"""
import torch
import torch.nn as nn
import matplotlib.pyplot as plt

class Full3Net(torch.nn.Module):
    def __init__(self, hid):
        super(Full3Net, self).__init__()
        self.in_hid = torch.nn.Linear(2, hid)
        self.hid_hid = torch.nn.Linear(hid, hid)
        self.hid_out = torch.nn.Linear(hid, 1)

    def forward(self, input):
        first_hid_sum = self.in_hid(input)
        self.hid1 = torch.tanh(first_hid_sum)
        second_hid_sum = self.hid_hid(self.hid1)
        self.hid2 = torch.tanh(second_hid_sum)
        out_sum = self.hid_out(self.hid2)
        output = torch.sigmoid(out_sum)
        return output

class Full4Net(torch.nn.Module):
    def __init__(self, hid):
        super(Full4Net, self).__init__()
        self.in_hid = torch.nn.Linear(2, hid)
        self.hid_hid = torch.nn.Linear(hid, hid)
        self.hid_out = torch.nn.Linear(hid, 1)
        print(self.in_hid)

    def forward(self, input):
        first_hid_sum = self.in_hid(input)
        self.hid1 = torch.tanh(first_hid_sum)
        second_hid_sum = self.hid_hid(self.hid1)
        self.hid2 = torch.tanh(second_hid_sum)
        third_hid_sum = self.hid_hid(self.hid2)
        self.hid3 = torch.tanh(third_hid_sum)
        out_sum = self.hid_out(self.hid3)
        output = torch.sigmoid(out_sum)
        return output

class DenseNet(torch.nn.Module):
    def __init__(self, num_hid):
        super(DenseNet, self).__init__()
        self.hid_num = num_hid
        self.in_hid = torch.nn.Linear(2, num_hid)
        self.hid_hid = torch.nn.Linear(2+num_hid, num_hid)
        self.hid_out = torch.nn.Linear(2+2*num_hid, 1)

    def forward(self, input):
        first_hid_sum = self.in_hid(input)
        self.hid1 = torch.tanh(first_hid_sum)
        second_hid_sum = self.hid_hid(torch.cat([self.hid1, input], dim=1))
        self.hid2 = torch.tanh(second_hid_sum)
        out_sum = self.hid_out(torch.cat([self.hid1, input, self.hid2], dim=1))
        output = torch.sigmoid(out_sum)
        return output

