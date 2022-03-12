#pragma once

namespace 对一组数据，进行排序 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 排序n种 摘要
	/// </summary>
	public ref class 排序n种 : public System::Windows::Forms::Form
	{
	public:
		排序n种(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~排序n种()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// 排序n种
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Name = L"排序n种";
			this->Text = L"排序n种";
			this->Load += gcnew System::EventHandler(this, &排序n种::排序n种_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 排序n种_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
