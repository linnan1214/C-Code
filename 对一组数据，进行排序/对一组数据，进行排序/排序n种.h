#pragma once

namespace ��һ�����ݣ��������� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ����n�� ժҪ
	/// </summary>
	public ref class ����n�� : public System::Windows::Forms::Form
	{
	public:
		����n��(void)
		{
			InitializeComponent();
			//
			//TODO: �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~����n��()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// ����n��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Name = L"����n��";
			this->Text = L"����n��";
			this->Load += gcnew System::EventHandler(this, &����n��::����n��_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ����n��_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
